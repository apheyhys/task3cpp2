#pragma once
//#ifndef TxtType
//#define TxtType
#include "str.h"
#include "el.h"
//using namespace::std;

struct El {
    struct List str;
    El *next;
    El *inf;
};

void inpList(El *head, List sstr);

El *dltHead(El *head);

El *dltList(El *head);

bool empty(El *head);

El *obr(El *head, El *head1, El *head2, fstream &f, fstream &f1, fstream &f2);

void inp(El *head, fstream &f);

void out(El *head, fstream &f);

void out_podstr(El *head, fstream &f);
//#endif