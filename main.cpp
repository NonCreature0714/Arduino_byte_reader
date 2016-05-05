#include <list>
#include <iostream>


//reader for Arduino.

using namespace std;

int main(){
    int sizeSigned;
    int theSigned;
    sizeSigned = sizeof(theSigned);
    unsigned int signed_int_mask = ((sizeSigned*8)-1); //creates a bitmask, size of which varies depending on your operating system.

    char sender[sizeSigned]; //creates an array of them smallest data type in C++, char, which is only 1 byte.
    int sizeByte;
    sizeByte = sizeof(sender[0]);
    unsigned int byte_mask = ((sizeByte * 8)-1); //creates a bitmask: 0 0 0 0 0 0 0 0


    //while there is a value to read
        // get the next theSigned binary value
        // add the bits of theSigned to the bits of byte_mask
        // send sender when full to arduino



}

//on arduino

class byteReader{
private:
    char byte_segment;
    char *byte_array;
    int theSigned;
    int sizeSigned;
    int sizeChar;
    int sizeOfByteArray;
    void setSignedSize() const;
    int getSignedSize() const;
public:
    byteReader();
    ~byteReader();
    byteReader(const byteReader &);
    byteReader operator=(const byteReader &);
    void setByte(const char &);
    char getByte() const;

    void push_back(const char &);
    int get() const;
};

void initiate(){
    byteReader bytie; // instantiate byteReader at whatever the setup call is.
}


void readFromInput(char received){
    bytie.push_back(received);

}