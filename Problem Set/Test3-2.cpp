#include <string>
#include <iostream>

using namespace std;

class Card {
public:
    string face;
    string suit;

    Card(string cardString) {
        suit = cardString.substr(0, cardString.find(' '));
        face = cardString.substr(cardString.find(' ') + 1);
        if (face.length() > 1) {
            face[0] = toupper(face[0]);
            face[1] = tolower(face[1]);
            suit[0] = toupper(suit[0]);
            suit[1] = toupper(suit[1]);
            suit[2] = toupper(suit[2]);
            suit[3] = toupper(suit[3]);
            suit[4] = toupper(suit[4]);
            suit[5] = toupper(suit[5]);
            suit[6] = toupper(suit[6]);
        }
        else {
            face[0] = toupper(face[0]);
            suit[0] = toupper(suit[0]);
            suit[1] = toupper(suit[1]);
            suit[2] = toupper(suit[2]);
            suit[3] = toupper(suit[3]);
            suit[4] = toupper(suit[4]);
            suit[5] = toupper(suit[5]);
            suit[6] = toupper(suit[6]);


        }
    }

    bool operator>(const Card& other) {
        int faceRank1, faceRank2;
        if (face == "2") {
            faceRank1 = 13;
        }
        else if (face == "A") {
            faceRank1 = 12;
        }
        else if (face == "K") {
            faceRank1 = 11;
        }
        else if (face == "Q") {
            faceRank1 = 10;
        }
        else if (face == "J") {
            faceRank1 = 9;
        }
        else {
            faceRank1 = stoi(face);
        }
        
        if (other.face == "2") {
            faceRank2 = 13;
        }
        else if (other.face == "A") {
            faceRank2 = 12;
        }
        else if (other.face == "K") {
            faceRank2 = 11;
        }
        else if (other.face == "Q") {
            faceRank2 = 10;
        }
        else if (other.face == "J") {
            faceRank2 = 9;
        }
        else {
            faceRank2 = stoi(other.face);
        }

        if (faceRank1 > faceRank2) {
            return true;
        }
        else if (faceRank1 == faceRank2) {
            if (suit == "SPADE" && other.suit != "SPADE") {
                return true;
            }
            else if (suit == "HEART" && other.suit != "SPADE" && other.suit != "HEART") {
                return true;
            }
            else if (suit == "DIAMOND" && other.suit == "CLUB") {
                return true;
            }
        }
        return false;
    }
};

int main()
{
// x y z v เอามาแทนเฉยๆตอนเรียกพร้อมกัน ถ้าใช x มันจะทับ
system("cls");
Card x = Card("CLUB A");
cout << x.suit;
cout << endl;
cout << "==================";
cout << endl;
//Result 
//CLUB

Card y = Card("SPADE 2");
cout << y.face;
cout << endl;
cout << "==================";
cout << endl;

//Result 
//2

Card z = Card("DiamonD k");
cout << z.face << "\n" << z.suit;
cout << endl;
cout << "==================";
cout << endl;
//Result
//K
//DIAMOND

Card v = Card("Heart 10");
cout << v.face << "\n" << v.suit;
cout << endl;
cout << "==================";
cout << endl;
//Result
//10
//HEART

cout << (Card("Spade 10") > Card("Spade 2"));
cout << endl;
cout << "==================";
cout << endl;
//Result
//0

cout << (Card("CLUB 2") > Card("Spade 2"));
cout << endl;
cout << "==================";
cout << endl;
//Result
//0

cout << (Card("Diamond A") > Card("Heart 4"));
cout << endl;
cout << "==================";
cout << endl;
//Result
//1

cout << (Card("SPADE A") > Card("SPADE 4"));
cout << endl;
cout << "==================";
cout << endl;
//Result
//1

cout << (Card("Heart K") > Card("heart Q"));
cout << endl;
cout << "==================";
cout << endl;
//Result
//1

}

/*
Test
	     
Card x = Card("CLUB A");
cout << x.suit;
Result 
CLUB

Card x = Card("SPADE 2");
cout << x.face;
Result 
2

Card x = Card("DiamonD k");
cout << x.face << "\n" << x.suit;
Result
K
DIAMOND

Card x = Card("Heart 10");
cout << x.face << "\n" << x.suit;
Result
10
HEART

cout << (Card("Spade 10") > Card("Spade 2"));
Result
0

cout << (Card("CLUB 2") > Card("Spade 2"));
Result
0

cout << (Card("Diamond A") > Card("Heart 4"));
Result
1

cout << (Card("SPADE A") > Card("SPADE 4"));
Result
1

cout << (Card("Heart K") > Card("heart Q"));
Result
1
*/