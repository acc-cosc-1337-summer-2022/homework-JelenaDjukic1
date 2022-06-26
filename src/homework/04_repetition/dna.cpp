

#include <iostream>
#include<string>

using namespace std;

double get_gc_content(const string& dna){
    double cnt=0,total=dna.size();
    for(int i=0;i<dna.size();i++){          //compute total G and C in dna 
        if(dna[i]=='C' || dna[i]=='G')cnt++;
    }
    return (cnt/total)*100.0;       //return GC content
}
string get_reverse_string(string dna){
    string rev="";
    for(int i=dna.size()-1;i>=0;i--){       //reversing the dna string 
        rev+=dna[i];
    }
    return rev;
}
string get_dna_complement(string dna){
    string cpl=get_reverse_string(dna);     //reverse the dna string
    for(int i=0;i<cpl.size();i++){      //iterating and replacing A with T, T with A,C with G and G with C
        if(cpl[i]=='A')
            cpl[i]='T';
        else if(cpl[i]=='T')
            cpl[i]='A';
        else if(cpl[i]=='C')
            cpl[i]='G';
        else if(cpl[i]=='G')
            cpl[i]='C';
    }
    return cpl;         //return the complement
}