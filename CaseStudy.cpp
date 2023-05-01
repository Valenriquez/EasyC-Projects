// Made by Valenriquez
// Date: 01/05/2023
// A program that uses binary search for efficiency --->  O(log n)

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

const int NUM_PRODS = 9;
const int TITLE_SIZE = 26;
const int DESC_SIZE = 12;
const int MIN_PRODNUM = 914;
int MAX_PRODNUM = 922;

int getProdNum(){
    int product_num;
    cout << "Enter the product number:  ";
    cin >> product_num;
        while(product_num < MIN_PRODNUM || product_num > MAX_PRODNUM){
            cout << "Enter a product number beetween " << MIN_PRODNUM << " and " << MAX_PATH << endl;
            cout << "Enter the product number:  ";
            cin >> product_num;
        }
    return product_num;
}
int binarySearch(int id[], int length,  int productNumber){
    int first = 0,
    last = length - 1,
    middle,
    position = -1;
    bool found = false;

    while(!found && first <= last){
        middle = (first + last)/2;
        if(id[middle] == productNumber)
        {
            found = true;
            position = middle;
        }else if(id[middle] > productNumber){
            last = middle - 1;
        }else{
            first = middle + 1;
        }
    }
    return position;

}
void displayProd(int index, string title[NUM_PRODS],string description[NUM_PRODS] ,float prices[]){
    cout << "Title: " << title[index] << endl;
    cout << "Description: " << description[index] << endl;
    cout << "Prices: " << prices[index] << endl;
}

int main(){
    bool user = 0;
    
    

    int id[NUM_PRODS] = {914,915,916,917,918,919,920,921,922};

    string title[NUM_PRODS] = {
        "Six steps to Leadership",
        "Six steps to Leadership",
        "The Road to Excellence",
        "Seven Lessons of Quality",
        "Seven Lessons of Quality",
        "Seven Lessons of Quality", 
        "Teams Are Made, Not Born",
        "Leaderships for the Future",
        "Leaderships for the Future"             
    };


    string description[NUM_PRODS] = {
        "Book", "Audio cassette", "Video", "Book", "Audio cassette", "Video", "Book", "Book", "Audio cassette"
    };

    float prices[NUM_PRODS] = {
        12.95, 14.95, 18.95, 16.95, 21.95, 31.95, 14.95, 14.95, 16.95
    };

    do{
        int prodNumber = getProdNum();
        int index = binarySearch(id, NUM_PRODS, prodNumber);
        if(index == -1){
            cout << "The product number wasn not found.";
        }else{
            displayProd(index, title, description, prices);
        }
        cout << "Do you wanna repeat the process? "<< endl;
        cout << "Press 1 -> yes " << endl;
        cout << "Press 0 -> no " << endl;
        cin >> user;
    }while(user != 0);  


    return 0;
}