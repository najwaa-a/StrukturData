#ifndef NILAI_H
#define NILAI_H

#include <iostream>
#include <string>
using namespace std;

struct Nilai {
    float uts;
    float uas;
    float tugas;
    float nilai_akhir;
    string nama;
    string nim;
};

float hitung_nilai_akhir(float uts, float uas, float tugas);

#endif