#pragma once
#include <chrono>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <sstream>
#include <random>
#include <list>



using namespace std;
using namespace std::chrono;


struct studentas
{
    string vard;
    string pavard;
    vector <int> nd;
    int egz;
    float gal;
    float galmed;
};

class Student {
    // realizacija
private:
    string vard;
    string pavard;
    double egz;
    vector<double> nd;
    float gal;
    // interfeisas
public:
    Student() : egz(0) { }  // default konstruktorius
    Student(istream& in, int kieknd); //konstr
    inline string vardas() const { return vard; }    // get'eriai, inline
    inline string pavarde() const { return pavard; }  // get'eriai, inline
    inline float galbal() const { return gal; }
    //void galBalas(vector <double> nd, double egz);  // get'eriai
    istream& readStudent(std::istream&, int kieknd);  // set'eriai
};

void Exists_test(const string& name);
void Skaicius(int& a);
void Ivestisranka(vector <studentas>& stud);
int Kiekpazymiu();
void Ivestis(vector <studentas>& stud);
bool Palyginimas(studentas& a, studentas& b);
bool Palyginimas2(Student& a, Student& b);
void Isvestis(vector <studentas> stud);
void Failugeneracija(int kieknd);
void Failgen(int kieknd, int kiekstud);

void Greicioanalizevector(int kiekstud);
void Rusiavimasvector(vector <studentas>& stud, vector <studentas>& vargsiukai, vector <studentas>& galvociai);

void Greicioanalizelist(int kiekstud);
void Rusiavimaslist(list <studentas>& stud, list <studentas>& vargsiukai, list <studentas>& galvociai);



void Vargsiukaiifaila(int kieknd, vector <studentas> vargsiukai, int kiekstud);
void Galvociaiifaila(int kieknd, vector <studentas> galvociai, int kiekstud);

//antra strategija

void Greicioanalizevector2(int kiekstud);
void Rusiavimasvector2(vector <Student>& stud, vector <Student>& vargsiukai);
void Vargsiukaiifaila2(int kieknd, vector <Student> vargsiukai, int kiekstud);
void Galvociaiifaila2(int kieknd, vector <Student> stud, int kiekstud);

void Greicioanalizelist2(int kiekstud);
void Rusiavimaslist2(list <studentas>& stud, list <studentas>& vargsiukai);
void Vargsiukaiifailalist2(int kieknd, list <studentas> vargsiukai, int kiekstud);
void Galvociaiifailalist2(int kieknd, list <studentas> stud, int kiekstud);


