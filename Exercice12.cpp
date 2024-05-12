//for

#include <iostream>
using namespace std ;
int main()
{ int i, n, som ;
som = 0 ;
for (i=0 ; i<4 ; i++)
{ cout << "donnez un entier " ;
cin >> n ;
som += n ;
}
cout << "Somme : " << som ;
}

//while

#include <iostream>
using namespace std ;
int main()
{ int i, n, som ;
som = 0 ;
i=0;
while (i<4)
{
i++;
cout << "donnez un entier " ;
cin >> n ;
som += n ;
}
cout << "Somme : " << som ;
}

//do...while

#include <iostream>
using namespace std ;
int main()
{ int i, n, som ;
som = 0 ;
i=0;
do
{
i++;
cout << "donnez un entier " ;
cin >> n ;
som += n ;
}
while(i<4);
cout << "Somme : " << som ;
}
