#include <iostream>
 
 
int main()
{
    int n,x,y;
    std::cout << "PODAJ WYSOKOSC RYSUNKU W LICZBIE CALKOWITEJ: ";
    std::cin >> n;
    std::cout << "\n\n";
    for (int i=0;i<n-1;i++)
    {
        std::cout << ' ' ;
    }
        std::cout << 'A' << std::endl;
    //teraz reszta literki, zaczynamy od if dla srodka literki:
   
    for (int y=n-1,k=0,i=0;y>=1;y--,k++,i++){
        for (int x=y-1;x>=1;x--)
        {
        std::cout << " " ;
        }
        std::cout << "A" ;
        //to, co się musi pojawić po lewym "A", a więc:
        //1) ilość spacji:

        
        
        
            for (int k=0;k<1+(i*2);k++)
            {
                //pozioma kreska
                if(i==n/2)
                {
                    std::cout << "A" ;
                }

                else
                {
                    std::cout << " " ;
                }
            }
            //2) prawe "A":
            std::cout << "A\n" ;
            //i mamy to!

            
        }
            std::cout << "\n\n";
}
