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
        }
        else {
            face[0] = toupper(face[0]);
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
