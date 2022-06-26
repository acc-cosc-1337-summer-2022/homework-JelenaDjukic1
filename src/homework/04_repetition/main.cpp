//write include statements
#include <iostream>
#include<string>
#include"dna.h"   
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	while(1){
        int n;
        cout<<"Options:\n1.Get GC content\n2.Get DNA compliment\n3.Exit\n";   
        cout<<"Enter code: ";
        cin>>n;                                         
        if(n==3)break;
        string dna="";
        cout<<"Enter DNA: ";
        cin>>dna;                                      
        if(n==1){
            cout<<"GC content of "<<dna<<" = "<<get_gc_content(dna)<<"\n";     
        }else{
            cout<<"DNA compliment of "<<dna<<" = "<<get_dna_complement(dna)<<"\n"; 
        }
    }
	return 0;
}