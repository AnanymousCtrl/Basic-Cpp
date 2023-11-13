//barcode generator
#include <stdio.h>
#include <barcode.h>

int main() {
    struct barcode b;

    barcode_init(&b, BARCODE_CODE128);

    // Set the barcode data (you can change this data)
    barcode_set_data(&b, "123456");

    // Set the output format (PNG in this example)
    barcode_set_outfile(&b, "barcode.png");

    // Set the barcode width and height
    barcode_set_width(&b, 300);
    barcode_set_height(&b, 100);

    // Generate the barcode
    if (barcode_encode(&b) == 0) {
        printf("Barcode generated successfully!\n");
    } else {
        printf("Barcode generation failed.\n");
    }

    // Cleanup
    barcode_free(&b);

    return 0;
}
