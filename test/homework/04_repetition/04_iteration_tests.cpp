#include <iostream>
#include<string>
#include"dna.h"
using namespace std;


void test_get_gc_content(){
    cout<<"Test function get_gc_content"<<endl;
    cout<<"Value\t\t\tResult\n";
    cout<<"AGCTATAG\t\t"<<get_gc_content("AGCTATAG")<<"\n";
    cout<<"CGCTATAG\t\t"<<get_gc_content("CGCTATAG")<<"\n\n";
}
void test_get_reverse_string(){
    cout<<"Test function get_reverse_string"<<endl;
    cout<<"Value\t\t\tResult\n";
    cout<<"AGCTATAG\t\t"<<get_reverse_string("AGCTATAG")<<"\n";
    cout<<"CGCTATAG\t\t"<<get_reverse_string("CGCTATAG")<<"\n\n";
}
void test_get_dna_complement(){
    cout<<"Test function get_dna_complement"<<endl;
    cout<<"Value\t\t\tResult\n";
    cout<<"AAAACCCGGT\t\t"<<get_dna_complement("AAAACCCGGT")<<"\n";
    cout<<"CCCGGAAAAT\t\t"<<get_dna_complement("CCCGGAAAAT")<<"\n\n";
}
int main() {
   
    test_get_gc_content();
    test_get_reverse_string();
    test_get_dna_complement();
    return 0;
}

