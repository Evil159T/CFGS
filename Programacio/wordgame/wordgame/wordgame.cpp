#include <iostream>
using namespace std;
string place1, object1, weapon1, action, pieceOfClothing1, partOfBody1, name1, place2, job1, silyWord1;
string yesNo;
string resposta;
int number1, number2, nameOfSpikes;
bool gameOver = false;
float nota;


int main()
{
    do {
    cout << "Now you give me ten words and make a random history \n\n";
    cout << "A place1: ";
    cin >> place1;
    cout << "A object: ";
    cin >> object1;
    cout << "A weapon: ";
    cin >> weapon1;
    cout << "An action: ";
    cin >> action;
    cout << "A piece of clothing: ";
    cin >> pieceOfClothing1;
    cout << "A part of body: ";
    cin >> partOfBody1;
    cout << "Digues un numero: ";
    cin >> number1;
    cout << "Digues un altre numero: ";
    cin >> number2;
    cout << "A name: ";
    cin >> name1;
    cout << "A diferent place: ";
    cin >> place2;
    cout << "A job: ";
    cin >> job1;
    cout << "A silly word: ";
    cin >> silyWord1;
    cout << "Yes or no? (Y/N): ";
    cin >> yesNo;
    if (yesNo == "Y" || yesNo == "y" || yesNo == "Yes" || yesNo == "yes") 
    {
        yesNo = "is";
    }
    else if(yesNo == "N" || yesNo == "n" || yesNo == "No" || yesNo == "no")
    {
        yesNo = "is not";

    }
    
    nameOfSpikes = number1 + number2;
    
    cout << endl << endl;



    cout << "A magician goes to 1)"<< place1 <<", meanwhile he is walking can see a strange cactus, he is approaching and throws a 2)" << object1 << " on cactus, catches a \n";
    cout <<  weapon1 << " of his bag and hits with it, he runs away, The cactus begins to 4)" << action <<", its top grows a mushroom like a 5)"<< pieceOfClothing1 <<", at the bottom \n";
    cout << "grows 6)" << partOfBody1 << " and uses branches as arms, this cactus have a 11)" << nameOfSpikes << " the cactus 12)" <<  yesNo << " so big\n";
    cout << "\n";
    cout << "Cactus is no more a one random cactus, now is The Cactus, now is Mr." << name1 <<". \n";
    cout << "Cactus is alive, he approaches a magic 8)" << place2 <<", the first he sees is a sign with a boxing ad, suddenly in his hands grows a glove mushroom, he entered in \n";
    cout << "the fight ring, at first he cant throw any punch, he cant block any punch, but he learns fast and started  to fight so good.\n";
    cout << "Suddenly, the 9)" << job1 <<" appears and entered to the ring, the fight begins, Mr.Cactus throws a lot of nice punches but the 9)" << job1 <<"block some punches, \n";
    cout << "now is the 9)" << job1 << " turn, he uses magic to turn stronger, but Mr. 7)" << name1 << " never thinks to give up, he dodges a big magic punch, Mr. 7)"<< name1 <<" takes \n";
    cout << "advantage of the inertia to turn while dodging and throw the strongest punch ever seen in than ring. The 9)" << job1 << " tries to use a potion, but he starts to \n";
    cout << "shake so hard and falls on the floor. Mr. 7)"<< name1 << " wins, and he became the city 10)" << silyWord1 <<"\n";
    cout << endl;

    cout << "Value the story Example: 5.25 6.00 Bad example: 5.252 \n";
    cin >> nota;

    cout << "Vols tornar a jugar? (Y/N) *Only with one character Y or N, Y = Yes N = No \n";
    cin >> resposta;
    if (resposta == "Y" || resposta == "y")
    {
        gameOver = false;
    }
    else if (resposta == "N" || resposta == "n")
    {
        gameOver = true;

    }

    } while (gameOver == false);

    cout << "\n\n\n GAME OVER, THANKS FOR PLAY :D \n\n\n";
    cout << "The note of the last story is: " << nota << endl;

    return 0;
}