/*
Write the following code using a while loop;

for (int i=0;i<=25;i++){

          i++;

          for (int k=0;k<=i;k++) k++;

}*/

#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    while (i <= 25) {

        int k = 0;

        i++;



        while (k <= i) { k++; }

    }
}
