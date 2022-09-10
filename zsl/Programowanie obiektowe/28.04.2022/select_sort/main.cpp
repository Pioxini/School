#include <iostream>

using namespace std;



void print(int size, int tab[]){
    int p=0;
    while(p<size){
        cout << tab[p] << "\t";
        p++;
    }
}

void swap_elements(int *a, int *b){
    int con=*a;
    *a=*b;
    *b=con;
}

void s_sort(int q, int tab[]){
    int i, k, minimum;
    for(i=0;i<q-1;i++){
        minimum=i;
        for(k=i+1;k<q;k++)
        if(tab[k]<tab[minimum]){
            minimum=k;
        }
        swap_elements(&tab[minimum], &tab[i]);
    }
}

int main(){
    setlocale(LC_ALL, "polish");

    int q;
    cout << "Podaj ilosc elementow tablicy: ";
    cin >> q;
    int tab[q];
    for(int i=0;i<=q-1;i++){
        cout << "Podaj " << i << " element tablicy: ";
        cin >> tab[i];
    }

    s_sort(q, tab);

    cout << "Posortowana tablica:\n";
    print(q, tab);



    return 0;
}
