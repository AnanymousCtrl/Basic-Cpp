#include <stdio.h>
#include <ZXing/BarcodeWriter.h>
#include <ZXing/TextUtfEncoding.h>
#include <ZXing/BarcodeFormat.h>
#include <ZXing/EncodeHints.h>
#include <opencv2/opencv.hpp>

int main() {
    // Define the text to encode
    const char* textToEncode = "HELLO WORLD";

    // Create a barcode writer
    BarcodeFormat format = BarcodeFormat_QR_CODE; // You can choose other formats
    Ref<BarcodeWriter> writer = CreateBarcodeWriter(format);

    // Set encoding hints (optional)
    EncodeHints hints;
    hints.margin = 2; // Barcode margin

    // Encode the text
    Ref<ByteArray> encoded = writer->encode(TextUtfEncoding::FromUtf8(textToEncode), hints);

    // Create a Mat object for the barcode image
    Mat barcodeImage(encoded->getHeight(), encoded->getWidth(), CV_8UC1);

    // Copy the barcode data to the Mat
    for (int y = 0; y < encoded->getHeight(); ++y) {
        for (int x = 0; x < encoded->getWidth(); ++x) {
            barcodeImage.at<uchar>(y, x) = ByteArray_get(encoded, x, y) ? 255 : 0;
        }
    }

    // Save the barcode image
    imwrite("barcode.png", barcodeImage);

    printf("Barcode generated successfully!\n");

    return 0;
}

