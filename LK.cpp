#include <iostream>
#include "LK.hpp"
using namespace std;
typedef string st;
int pa;
st name;
st okay;
int answer;
int answer2;
int answer3;
int answer4;
CheckPoints h;

void lk()
{
    cout << "You wake up middle of the jungle ,start looking around you and don't know where you are,\n OMG my hands im bleeding. Oh whats that?.. it's a cave! ";
    cout << "Enter the cave*\nSuddenly a girl filled with light comes out of NO WHERE! ";
    cout << "\nwhats is your name young boy? ";
    cin >> name;
    cout << "WOW What a beautiful name I see your bleeding " << name << " i can help you with that but you must answer 1 question,\n Okay?? (y/n)";
    cin >> okay;
    if (okay == "y" | okay == "Y")
    {
        cout << "GREAT! Pay attention!!";
        cout << "Your goal is to get to number 40 using only 3 numbers and sum Operator, computer adds 10\n How do you want to solve it? ";
        cin >> answer; cin >> answer2; cin >> answer3;
        int aw = answer + answer2 + answer3 + 10;
            if (aw == 40)
            {
                h.CheckPoint2();

            }
            else 
            {
                cout << "Wrong answer sorry i can't give you the medkit\n";
                cout << "but im dieng come on woman!!!";
                h.Death();
            }
    }
    else if (okay == "N" | okay == "n")
    { 
        cout << "Bleed to Death*"; 
        h.Death(); 
    }
    else { lk(); }
}

int main()
{
    lk();
}

void CheckPoints::Death()
{
    cout << "\nYOUR DEAD | GAME OVER";
    cout << endl << "1.RestartGame | 2.ExitGame: ";
    cin >> pa;
    if (pa == 1){lk();}
    else if (pa == 2){while (pa){break;}}
    else{Death();}
}
void CheckPoints::CheckPoint2()
{
    int x = 1;
    cout << "That is Correct! CONGRAGULATION here is a medkit for your bleeding\n Thank you i am saved, now can you tell me where is this place and how did i get here??? ";
    cout << "\nUnfortunatly i don't know how you got here but i can tell you where are we, but you have to answer 2 questions before that.\n";
    cout << "1.Answer To Live | 2.Get Lost: ";
    cin >> pa;
    if (pa == 1)
    {
        cout << "get to 65 with 3 numbers and sum operator ComputerAdds 20\n";
        cin >> answer; cin >> answer2; cin >> answer3;
        int aw = answer + answer2 + answer3 + 20;
        if (aw == 65)
        {
            cout << "Correct. Next one\n";
            cout << "get to 100 with 2 numbers and sum operator ComputerAdds 50\n";
            cin >> answer; cin >> answer2;
            int aw = answer + answer2 + 50;
            if (aw == 100)
            {
                cout << endl << "Congrats! you are in NumaraIsland, land of Hopes and Dreams!\nIf you keep going this road you'll find a village\nWhile there ask for Luna and tell her Mary sent you\nshe'll help you" << endl;
                CheckPoint3();
            }
            
                
        }
        else
        {
            cout << "Sorry wrong answer.";
            LastCheckPoint();  
        }            
    }
    else if (pa == 2)
    {
        cout << "Oh god i hope i don't get eaten in this jungle, and i couldnt keep answering her stupid questions!\nSHIT whats that!? it's coming at me oh no......";
        LastCheckPoint();      
    }
    else 
    {
        Death();    
    }

}
void CheckPoints::CheckPoint3()
{   
    cout << "while walking to the village you hear something\nPerekoros:WHO ARE YOU?! ";
    cout << "\n1.Im a villager | 2.Im lost: ";
    int x;
    cin >> x;
    if (x == 1)
    {
        cout << "How dare you lie to me, Iam the great perekoros i can tell if your lieing!";
        cout << endl << "\nPerekoros eats you alive*";
        LastCheckPoint2();
    }
    else if(x == 2)
    {
        cout << "I can help you if you answer my question";
        cout << "\nget to 60 with 4 numbers and sum operator ComputerAdds 30:\n";
        cin >> answer; cin >> answer2; cin >> answer3; cin >> answer4;
        int aw = answer + answer2 + answer3 + answer4 + 30;
        if (aw == 60)
        {
            cout << endl << "NotBad straghit end of this road";
            CheckPoint4();
        }
        else
        {
            cout << "wrong answer Homan!";
            LastCheckPoint2();  
        } 

    }
}
void CheckPoints::CheckPoint4()
{

}
void CheckPoints::LastCheckPoint()
{
    cout << "\nYOUR DEAD | GAME OVER";
    cout << endl << "1.RestartGame | 2.ExitGame | 3.LastCheckPoint: ";
    cin >> pa;
    if (pa == 1){lk();}
    else if (pa == 2){while (pa){break;}}
    else if(pa == 3){h.CheckPoint2();}
}
void CheckPoints::LastCheckPoint2()
{
    cout << "\nYOUR DEAD | GAME OVER";
    cout << endl << "1.RestartGame | 2.ExitGame | 3.LastCheckPoint: ";
    cin >> pa;
    if (pa == 1){lk();}
    else if (pa == 2){while (pa){break;}}
    else if(pa == 3){h.CheckPoint3();}
}
void CheckPoints::LastCheckPoint3()
{

}    