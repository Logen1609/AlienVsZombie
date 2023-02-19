// ********************************************************* 
// Course: TCP1101 PROGRAMMING FUNDAMENTALS 
// Year: Trimester 1, 2022/23 (T2215) 
// Lab: T10L 
// Names: MEMBER_LOGENTHIRAN
// IDs: MEMBER_1211103059 
// Emails: MEMBER_1211103059@student.mmu.edu.my
// Phones: MEMBER_0196105993
// *********************************************************
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;



const int ROW = 21;
const int COL = 21;
const int ZOMBIE = 9;

char gameMatrix[ROW][COL];
int row, col, zombie;

void changeSettings()
{
    cout<<"Enter the number of rows (Max "<<ROW<<"): ";
    cin>>row;
    cout<<"Enter the number of columns (Max "<<COL<<"): ";
    cin>>col;
    cout<<"Enter the number of zombies: ";
    cin>>zombie;
    if (zombie > 9) {
    cout << "\nError: Maximum number of zombies is 9." << endl;
    // return 0;
     }
     else{
          cout << "\nSettings Updated." << endl;
     }

   
    cout << "Press any key to continue . . . " << endl;
    cin.ignore();
    cin.ignore();
}

void createMatrix()
{
    int countZombies = 0;
    char elements[] = {'r', 'h', 'v', '>', ' '};
    srand(time(0));
    int temp1 = 1;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            int randomIndex = rand() % 5;
            // if(countZombies < zombie)
            // {
            //     gameMatrix[i][j] = (temp1+48);
            //     countZombies++;
            //     temp1 ++;
            // }
            // else
            // {
            //     gameMatrix[i][j] = elements[randomIndex];
            // }
            if (i == (row - 1) / 2 && j == (col - 1) / 2)
{
    gameMatrix[i][j] = 'A';
}
else if(countZombies < zombie)
{
    gameMatrix[i][j] = (temp1+48);
    countZombies++;
    temp1 ++;
}
else
{
    gameMatrix[i][j] = elements[randomIndex];
}
        }
    }
}

void displayMatrix()
{
   
   
   for(int ax = 0; ax<col; ax++){
       cout<<"-+-+";
       
   }
   cout<<endl;
   
   
   
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        
       
        {
             cout<<" | ";
            cout<<gameMatrix[i][j]<<"";
            

        }
        cout<<endl;
        
        for(int ax = 0; ax<col; ax++){
       cout<<"-+-+";
   }
  
        
            cout<<endl;
        
        
        
    }
  
}

int main()
{
    row = ROW;
    col = COL;
    zombie = ZOMBIE;

cout<<"\t" <<endl;
    cout<<"Default Game Settings:"<<endl;
    
    cout<<"---------------------" <<endl;
    
    cout<<"Rows: "<<row<<endl;
    cout<<"Columns: "<<col<<endl;
    cout<<"Zombies: "<<zombie<<endl;
    
    cout<<"\t" <<endl;

    cout<<"Do you want to change the settings? (y/n): ";
    char choice;
    cin>>choice;
    if(choice == 'y' || 'Y')
    {
        changeSettings();
    }
    else {
        cout << "Input Error!" << endl;
        cout <<"press any key to continue..."<<endl;
        cin.ignore();
        cin.ignore();
         return 0;
    }

    createMatrix();
    cout<<endl<<"    .:ALIEN VS ZOMBIES :.      "<<endl;
    
    displayMatrix();
    
    return 0;
}