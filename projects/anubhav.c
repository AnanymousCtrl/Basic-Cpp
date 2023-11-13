#include<stdio.h>    
#include<stdlib.h>    
#include<conio.h> 

struct game
{
   char name[25];;
   int score;
   int rating;
}p;

void start();    
void help();  

int main(){
    
    int choice;

    printf("  Please enter 1 to start the game \n ");    
    printf(" Please enter 3 to seek help \n ");  
    printf(" Please enter 0 to exit \n ");  
    printf(" Enter your choice: "); 
    
    scanf("%d",&choice);
    switch(choice)    
    {    
          
        case 1:    
            start();    
            break;    
  
  
         
        case 3: help();    
                break;    
  
          
        default: exit(1);    
    }    
}

void help(){
    
	int ch;    
    
    printf( "\n\n Instructions that are supposed to be followed" );   
    printf("while playing this game: \n " );  
    printf("Quiz Game in C\n " );  
    printf("......................................................" );  
	printf( "\n You are supposed to answer 20 questions in this game !! " );    
	printf( "\n There will be 4 options given for each questions which are marked with a serial number starting from 1 to 4. " );    
	printf( "\n For each correct answer, you will be awarded with 5 points !! " );    
	printf( "\n As soon as you answer a question, you will be directed to the next question without any pause. " );    
	printf( "\n If your answer is wrong, no marks will be deducted from your score !! " );    
    printf( "\n\n !! Wish you all the best !! \n\n " );    
    printf( "\n Do you still wish to continue playing ? If yes, then press 1. Else, press 0 :  " );    
    scanf( "%d", &ch );    
      
    
    if( ch == 1 )    
    {    
        start();    
    }    
    
    else    
    {    
        exit(1);    
    }    
}



void start(){    
   
    int ans;   
  
   
    int count = 0;    
  
   
    char rating[20];    
      
    
    
    
    
    printf( "\n Enter your Full name: " );    
  
   
    scanf( "%s", p.name );    
    
     
    printf(" Welcome to the game \" %s \"   \n\n ", p.name);   
      
    printf(" The quiz game will be started now. Get ready to answer the questions !! \n ");  
    printf(" ALL THE BEST !! ");  
      
    printf(" Question 1: \n");  
    printf(" In the following given characteristics, which one is not related to the federal government ? \n 1. Flexible Constitution \t \t 2. Written Constitution \t \t 3. Independent Judiciary \t \t 4. Supremacy of the Constitution \n\n ");    
    printf("Please enter your answer: ");    
  
   
    scanf("%d", &ans);    
      
    
    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
   
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no.  1. Flexible Constitution \n\n");    
    }     
      
    printf(" Question 2: \n");  
    printf(" In the following given members, who was the first person belonging to India entered into the space ? \n 1. Ravish Malhotra \t \t 2. Vikram Ambalal \t \t 3. Rakesh Sharma \t \t 4. Nagapathi Bhat \n\n ");    
    printf("Please enter your answer: ");    
  
    
    scanf("%d", &ans);    
      
    
    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }  
  
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no.  3. Rakesh Sharma  \n\n");    
    }   
      
    printf(" Question 3: \n");  
    printf(" Who was the first women to reach the summits of all seven highest mountain peaks on every continent ? \n 1. Junko Tabei \t \t 2. Bachendri Pal \t \t 3. Premlata Agarwal \t \t 4. Santosh yadav \n\n ");    
    printf("Please enter your answer: ");    
  
   
    scanf("%d", &ans);

	if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
     
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no.  1. Junko Tabei  \n\n");    
    }  
        
    printf(" Question 4: \n");  
    printf(" Who was the first person to be the Indian Prime Minister ? \n 1. Prathiba Patel \t \t 2. Jawaharlal Nehru \t \t 3. Rabindranath Tagore \t \t 4. Lal Bahadur Shastri \n\n ");    
    printf("Please enter your answer: ");    
  
     
    scanf("%d", &ans);    
   
    if( ans == 2 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
       
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no.  2. Jawaharlal Nehru  \n\n");    
    }    
    printf(" Question 5: \n");  
    printf(" How many bones does an adult human skeleton have ? \n 1. 207 bones \t \t 2. 205 bones \t \t 3. 206 bones \t \t 4. 210 bones \n\n ");    
    printf("Please enter your answer: ");    
  
    
    scanf("%d", &ans);    
      
    
    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no.  3. 206 bones  \n\n");    
    }  
        
    printf(" Question 6: \n");  
    printf(" Which blood group out of the following is known to be universal acceptor ? \n 1. AB + \t \t 2. AB - \t \t 3. O + \t \t 4. O - \n\n ");    
    printf("Please enter your answer: ");    
  
    
    scanf("%d", &ans);    
    
    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no.  1. AB +  \n\n");    
    }    
         
      
    printf(" Question 7: \n");  
    printf(" What is Vitamin K also known as ? \n 1. Riboflavin \t \t 2. Thiamine \t \t 3. Ascorbic acid \t \t 4. Pentamine \n\n ");    
    printf("Please enter your answer: ");    
  

    scanf("%d", &ans);     
      
  
    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no.  3. Ascorbic acid  \n\n");    
    }  
        
    printf(" Question 8: \n");  
    printf(" Out of the following membranes, which membrane is mostly present in both Spinal cord and Brain ? \n 1. Meninges \t \t 2. Arachnoids \t \t 3. Plasma Membrane \t \t 4. Pleural membrane \n\n ");    
    printf("Please enter your answer: ");    
  
    
    scanf("%d", &ans);    
      
    
    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    
     
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no.  1. Meninges  \n\n");    
    }  
    
           
      
    printf(" Question 9: \n");  
    printf(" Which person among the following people have contributed their time to represent the first budget of India after its Independence ? \n 1. Manmohan Singh \t \t 2. Jawaharlal Nehru \t \t 3. Pranav Mukherjee \t \t 4. R. K. Shanmukham Chetty \n\n ");
	printf("Please enter your answer: ");    
  
    scanf("%d", &ans);    
       
    
    if( ans == 4 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no. 4. R. K. Shanmukham Chetty  \n\n");    
    }  
        
    printf(" Question 10: \n");  
    printf(" Which position out of the following has a right to select and appoint a Prime Minister ? \n 1. President \t \t 2. Chief Justice of India \t \t 3. Governor \t \t 4. Vice President \n\n ");    
    printf("Please enter your answer: ");    
  
    
    scanf("%d", &ans);    
      
    
    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
   
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no. 1. President  \n\n");    
    }  
  
	printf(" Question 11: \n");  
    printf(" The federal union country India consists of how many union territories ? \n 1. 6 \t \t 2. 7 \t \t 3. 8 \t \t 4. 9 \n\n ");    
    printf("Please enter your answer: ");    
  
   
    scanf("%d", &ans);    
      
    
    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no. 3. 8  \n\n");    
    }    
    
    printf(" Question 12: \n");  
    printf(" Out of the following people, which person belonging to India  was the first one to win the Booker Price ? \n 1. Arundhati Roy \t \t 2. Aravind Adiga \t \t 3. Nirad C. Chaudhuri \t \t 4. Dhan Gopal Mukerji \n\n ");    
    printf("Please enter your answer: ");    
  
    
    scanf("%d", &ans);    
      
    
    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
   
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is 1. Arundhati Roy  \n\n");    
    }    
    
    printf(" Question 13: \n");  
    printf(" Out of the following languages, which language is the mainly spoken language in the state Meghalaya ? \n 1. Khulu \t \t 2. Thayaari \t \t 3. Naasi \t \t 4. Khasi \n\n ");   
    printf("Please enter your answer: ");    
  
   
    scanf("%d", &ans);    
      
   
    if( ans == 4 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
  
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no. 4. Khasi \n\n");    
    }    
    
    printf(" Question 14: \n");  
    printf(" How many number of judges do the Indian Supreme court consist of at present ? \n 1. 25 judges \t \t 2. 20 judges \t \t 3. 31 judges \t \t 4. 30 judges \n\n ");    
    printf("Please enter your answer: ");    
  
   
    scanf("%d", &ans);    
      
    
    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is 3. 32 Judges  \n\n");
	}    
    
    printf(" Question 15: \n");  
    printf(" Out of the following people, who was presented with the Union Budget for maximum number of times ? \n 1. R K Shanmukham Chetty \t \t 2.  P. Chidambaram \t \t 3. Pranav Mukherjee \t \t 4. Morarji Desai \n\n ");    
    printf("Please enter your answer: ");    
  
    
    scanf("%d", &ans);    
      
   
    if( ans == 4 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
       
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no. 4. Morarji Desai \n\n");    
    }    
    
    printf(" Question 16: \n");  
    printf(" Out of the following people, who is famously known as \" flying sikh \" ? \n 1. Milkha Singh \t \t 2.  Sardar Vallabhbhai Patel \t \t 3. Jawaharlal Nehru \t \t 4. Lala Lajpat Rai \n\n ");    
    printf("Please enter your answer: ");    
  
   
    scanf("%d", &ans);    
      
    
    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
     
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no. 1. Milkha Singh \n\n");    
    }  
    
    printf(" Question 17: \n");  
    printf(" Out of the following days, when will the lunar eclipse happen ? \n 1. On a full moon night \t \t 2.  On a half moon night \t \t 3. On a Sunny day \t \t 4. On an Equinox \n\n ");      
    printf("Please enter your answer: ");    
  
    // scanning the answer  
    // from the user  
    scanf("%d", &ans);    
      
    
    if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no. 1. On a full moon night \n\n");    
    }    
      
    printf(" Question 18: \n");  
    printf(" Out of the following listed cancers, which cancer is the most common type of cancer that kills male people in the entire world ? \n 1. Throat Cancer \t \t 2.  Lung Cancer \t \t 3. Liver Cancer \t \t 4. Skin Cancer \n\n ");    
    printf("Please enter your answer: ");    
  
   
    scanf("%d", &ans);    
      
   
    if( ans == 2 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
    
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no. 2. Lung Cancer \n\n");    
    }  
    
    printf(" Question 19: \n");  
    printf(" Out of the following listed cancers, which cancer occurs within the bone marrow ? \n 1. Sarcoma \t \t 2.  Myeloma \t \t 3. Leukemia \t \t 4. Lymphoma \n\n ");    
    printf("Please enter your answer: ");    
  
    scanf("%d", &ans);    
      
    
    if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
      
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no. 3. Leukemia \n\n");    
    }  
    
    printf(" Question 20: \n");  
    printf(" Out of the following listed virus, which virus is transmitted through the bite of animals, birds, and insects that are effected with any kind of infections? \n 1. Ebola virus \t \t 2.  Rabies virus \t \t3. Flavi virus \t \t 4. All of the bove \n\n ");
	printf("Please enter your answer: ");    
  
    scanf("%d", &ans);    
      
     
    if( ans == 4 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n\n ");  
        ++count;    
    }   
  
      
    else    
    {    
        printf(" The answer that you have entered is wrong. The correct answer for the above question is option no. 4. All of the above \n\n");    
    }   
    
    
     
    if(count > 0)    
    {    
        printf(" You have scored %d points \t \n", count * 5 );    
        printf(" Thank you for your interest !! \n");  
        p.score = count * 5;    
  
        
         
        if( p.score >= 80 )    
        {    
            printf("Player rating: 5/5 \n");    
            p.rating = 5;    
        }    
  
        
        else if( p.score >= 60 && p.score < 80 )    
        {    
            printf("Player rating: 4/5 \n");    
            p.rating = 4;    
        }    
       
        else if(p.score >= 40 && p.score < 60)    
        {    
            printf("Player rating: 3/5 \n");    
            p.rating = 3;    
        }    
  
        
        else if(p.score >= 20 && p.score < 40)    
        {    
            printf("Player rating: 2/5 \n");    
            p.rating = 2;    
        }    
  
        
        else if(p.score < 20)    
        {    
            printf("Player rating: *");    
            p.rating = 1;    
        }    
    }
}
