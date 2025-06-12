#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

string printSequence(string S) {
    
    unordered_map<char,int> map{
        {' ',0},{'A',2},{'B',22},{'C',222},
        {'D',3},{'E',33},{'F',333},{'G',4},
        {'H',44},{'I',444},{'J',5},{'K',55},
        {'L',555},{'M',6},{'N',66},{'O',666},
        {'P',7},{'Q',77},{'R',777},{'S',7777},
        {'T',8},{'U',88},{'V',888},{'W',9},{'X',99},
        {'Y',999},{'Z',9999}};
      
      
     string ans = "";
     
     for(auto&ch : S){
        ans += to_string(map[ch]);
     }
     
     return ans;
}