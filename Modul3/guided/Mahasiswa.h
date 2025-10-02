#ifndef MAHASISWA_H_INCLUDE // memeriksa apakah mahasiswa.h itu sudah di definisikan atau belum, kalau belum program dia bakalan error. 
#define MAHASISWA_H_INCLUDE

struct mahasiswa{
    char nim[10];
    int nilai1, nilai2;
};

void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);

#endif
