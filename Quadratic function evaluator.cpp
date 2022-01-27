#include <iostream>
#include <cmath>
                 /**
                 *     $$    $$           $$        $$ $$     $$$$$$$
                 *    $$ $$ $$ $$        $$ $$      $$   $$   $$
                 *   $$   $$    $$      $$$$$$$     $$   $$   $$$$$$$
                 *  $$     $     $$    $$     $$    $$   $$   $$
                 * $$             $$  $$       $$   $$ $$     $$$$$$$$
                 * 
                 * 
                 * %%%%     %%    %%
                 * %   %     %%  %%
                 * %% %%      %%%
                 * %    %      %
                 * %%%%%       %
                 * 
                 * 
                 * ______________________________________________
                 * =   #######  ###      ##        ###    ##    =
                 * =      #      #      ## ##      ## #   ##    =
                 * =      #      #     #######     ##  #  ##    =
                 * =      #      #    ##     ##    ##   # ##    =
                 * =      #     ###  ##       ##   ##    ###    =
                 * ______________________________________________
                 * =                                            =
                 * =   #             #  ######   ###            =
                 * =    #     #     #   #         #             =
                 * =     #   # #   #    ######    #             =
                 * =      # #   # #     #         #             =
                 * =       #     #      ######   ###            =
                 * ______________________________________________ 
                 */
using namespace std ;

int main () 
{
    cout <<"       $$    $$           $$        $$ $$     $$$$$$$ "<<endl;
    cout <<"      $$ $$ $$ $$        $$ $$      $$   $$   $$ "<< endl;
    cout <<"     $$   $$    $$      $$$$$$$     $$   $$   $$$$$$$ "<< endl;
    cout <<"    $$     $     $$    $$     $$    $$   $$   $$ "<< endl;
    cout <<"   $$             $$  $$       $$   $$ $$     $$$$$$$$ "<< endl;
    cout << "" << endl;
    cout << "" << endl;
    cout <<"        @@@@     @@    @@ "<< endl;
    cout <<"        @   @     @@  @@ "<< endl;
    cout <<"        @@ @@      @@@ "<< endl;
    cout <<"        @    @      @ "<< endl;
    cout <<"        @@@@@       @ "<< endl;
    cout <<"       ______________________________________________"<< endl;
    cout <<"       =   #######  ###      ##        ###    ##    ="<< endl;
    cout <<"       =      #      #      ## ##      ## #   ##    ="<< endl;
    cout <<"       =      #      #     #######     ##  #  ##    ="<< endl;
    cout <<"       =      #      #    ##     ##    ##   # ##    ="<< endl;
    cout <<"       =      #     ###  ##       ##   ##    ###    ="<< endl;
    cout <<"       ______________________________________________"<< endl;
    cout <<"       =                                            ="<< endl;
    cout <<"       =   #             #  ######   ###            ="<< endl;
    cout <<"       =    #     #     #   #         #             ="<< endl;
    cout <<"       =     #   # #   #    ######    #             ="<< endl;
    cout <<"       =      # #   # #     #         #             ="<< endl;
    cout <<"       =       #     #      ######   ###            ="<< endl;
    cout <<"       ______________________________________________"<< endl;
    

    while (true){
    double a=1 ;
    double qa ;
    cout << "Please enter the a..." << endl ;
    cin >> qa ;
        if (qa ==0)
    {
        cout << "a!=0 --> a=1" << endl ;
    }else
    {
        a = qa ;
    }
    double b ;  //==============================================================================
    cout << "Please enter the b..." << endl ;
    cin >> b ;
    if (b>0)      //b>0=============================================================
    {
    double c ;
    cout << "Please enter the c..." << endl ;
    cin >> c ; 
    if (c>0)      //b>0 , c>0
    {                                                        
        double M_x;
        double M_y;
        M_x = -(b/(2*a)) ;
        M_y = ((4*a*c)-pow(b,2))/(4*a) ;
        cout << "Expression (analytical):" << "y=" << a << "pow(x,2)+" << b << "x+" << c << endl ;   //====全====
        cout << "The vertex coordinates are: (" << M_x << "," << M_y << ")" << endl ;
        double x ;
        double y ;
        cout << "Please enter the x..." << endl ;
        cin >> x ;
        y = a * pow(x,2)+b*x+c ;
        cout << "y=" << y << endl ;
    }else{          // b>0 , c<=0
        if (c==0)         // b>0  c=0      
        {
            double M_x;
            double M_y;
            M_x = -(b/(2*a)) ;
            M_y = ((4*a*c)-pow(b,2))/(4*a) ;
            cout << "Expression (analytical):" << "y=" << a << "pow(x,2)+" << b << "x" << endl ;   //无 c
            cout << "The vertex coordinates are: (" << M_x << "," << M_y << ")" << endl ;
            double x ;
            double y ;
            cout << "Please enter the x..." << endl ;
            cin >> x ;
            y = a * pow(x,2)+b*x+c ;
            cout << "y=" << y << endl ;
        }else {     //  b>0  c<0
            double M_x;
            double M_y;
            M_x = -(b/(2*a)) ;
            M_y = ((4*a*c)-pow(b,2))/(4*a) ;
            cout << "Expression (analytical):" << "y=" << a << "pow(x,2)+" << b << "x" << c << endl ;  //null +
            cout << "The vertex coordinates are: (" << M_x << "," << M_y << ")" << endl ;
            double x ;
            double y ;
            cout << "Please enter the x..." << endl ;
            cin >> x ;
            y = a * pow(x,2)+b*x+c ;
            cout << "y=" << y << endl ;
        }
    }
    }else {            // b<=0 ===================================================================
    if (b==0)            //b=0 -------------------------------------------------------------------
    {
        double c ;
        cout << "Please enter the c..." << endl ;
        cin >> c ; 
        if (c>0)       // b=0 , c>0           //b=0 , c>0 至 b<0 , c<0 Okey!!!
        {
        double M_x;
        double M_y;
        M_x = -(b/(2*a)) ;
        M_y = ((4*a*c)-pow(b,2))/(4*a) ;
        cout << "Expression (analytical):" << "y=" << a << "pow(x,2)+" << c << endl ;  //无 b
        cout << "The vertex coordinates are: (" << M_x << "," << M_y << ")" << endl ;
        double x ;
        double y ;
        cout << "Please enter the x..." << endl ;
        cin >> x ;
        y = a * pow(x,2)+b*x+c ;
        cout << "y=" << y << endl ;
        }else {       // b=0  , c<=0     //b=0 , c<0  Okey!!!
        if (c==0)
        {
            double M_x;
            double M_y;
            M_x = -(b/(2*a)) ;
            M_y = ((4*a*c)-pow(b,2))/(4*a) ;
            cout << "Expression (analytical):" << "y=" << a << "pow(x,2)" << endl ;   //无 b,  c
            cout << "The vertex coordinates are: (" << M_x << "," << M_y << ")" << endl ;
            double x ;
            double y ;
            cout << "Please enter the x..." << endl ;
            cin >> x ;
            y = a * pow(x,2)+b*x+c ;
            cout << "y=" << y << endl ;
        }else {             //c<0
            double M_x;
            double M_y;
            M_x = -(b/(2*a)) ;
            M_y = ((4*a*c)-pow(b,2))/(4*a) ;
            cout << "Expression (analytical):" << "y=" << a << "pow(x,2)" << c << endl ;   //无 b null+
            cout << "The vertex coordinates are: (" << M_x << "," << M_y << ")" << endl ;
            double x ;
            double y ;
            cout << "Please enter the x..." << endl ;
            cin >> x ;
            y = a * pow(x,2)+b*x+c ;
            cout << "y=" << y << endl ;
        }
    }
    
        }else{                 //b<0
            double c ;
            cout << "Please enter the c..." << endl ;
            cin >> c ;
            if (c>0)     
            {
                double M_x;
                double M_y;
                M_x = -(b/(2*a)) ;
                M_y = ((4*a*c)-pow(b,2))/(4*a) ;
                cout << "Expression (analytical):" << "y=" << a << "pow(x,2)" << b << "x+" << c << endl ;    //全=============== //null +
                cout << "The vertex coordinates are: (" << M_x << "," << M_y << ")" << endl ;
                double x ;
                double y ;
                cout << "Please enter the x..." << endl ;
                cin >> x ;
                y = a * pow(x,2)+b*x+c ;
                cout << "y=" << y << endl ;
            }else {
                    if (c==0)
                    {
                        double M_x;
                        double M_y;
                        M_x = -(b/(2*a)) ;
                        M_y = ((4*a*c)-pow(b,2))/(4*a) ;
                        cout << "Expression (analytical):" << "y=" << a << "pow(x,2)" << b << "x" << endl ;   //null +
                        cout << "The vertex coordinates are: (" << M_x << "," << M_y << ")" << endl ;
                        double x ;
                        double y ;
                        cout << "Please enter the x..." << endl ;
                        cin >> x ;
                        y = a * pow(x,2)+b*x+c ;
                        cout << "y=" << y << endl ;
                    }else{
                        double M_x;
                        double M_y;
                        M_x = -(b/(2*a)) ;
                        M_y = ((4*a*c)-pow(b,2))/(4*a) ;
                        cout << "Expression (analytical):" << "y=" << a << "pow(x,2)" << b << "x" << c << endl ;  //null + x 2
                        cout << "The vertex coordinates are: (" << M_x << "," << M_y << ")" << endl ;
                        double x ;
                        double y ;
                        cout << "Please enter the x..." << endl ;
                        cin >> x ;
                        y = a * pow(x,2)+b*x+c ;
                        cout << "y=" << y << endl ;
                    }
                    
            }
        }
    }
    system ("pause") ;
    }
    return 0 ;
}

