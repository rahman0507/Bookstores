#include <iostream>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <cstring>

using namespace std;

struct book{
	char bookname[30];
	char genre[30];
	char language[25]; //Melayu English Mandarin
	int page;
	int yearpublished;
	double price;
}; 

//average buku by language , and average buku by price
//counter kira berape banyak buku yang mahal,buku murah and so on
//minimum price , total page
//maximum price , total page 
//(buble sort)sorting title , price  
//(sequantial search)searching buku by language, by year and so on done 
// sum by language done
// highest index and lowest index done

void readData ( ifstream& , book[][5]);
void findyear ( ofstream& ,book[][5]);
void findgenre ( ofstream& ,book[][5]);
void findlanguage ( ofstream& ,book[][5]);
void findprice ( ofstream& ,book[][5]);
void countNaverage ( ofstream& ,book[][5]);
void minNMax ( ofstream& ,book[][5]);
void sorting ( ofstream& ,book[][5]);
void sequentialSearch ( ofstream& ,book[][5] );



int main()
{
	const int row =3, books =5;
	
	book info[row][books];


	ofstream outFile;
	ifstream inFile; 
	
	if (!inFile)
	{
		cout << "Error: file could not be opened" << endl;
		_getch();
		return 0;	//return false;
	}
	
	inFile.open("booklist.txt");
	readData ( inFile, info );

	//outFile.open("findyear.txt");
	
	outFile.open( "findyear.txt" );
	findyear ( outFile, info );
	//inFile.close();
	outFile.close();
	
	//
	outFile.open( "findgenre.txt" );
	findgenre ( outFile, info );
	outFile.close();
	
	//
	outFile.open( "findlanguage.txt" );
	findlanguage ( outFile, info );
	outFile.close();
	
	outFile.open( "findprice.txt" );
	findprice ( outFile, info );
	outFile.close();
	
	outFile.open( "countNaverage.txt");
	countNaverage ( outFile, info );
	outFile.close();
	
	outFile.open( "minNMax.txt");
	minNMax ( outFile, info );
	outFile.close();
	
	outFile.open( "sorting.txt");
	sorting ( outFile, info );
	outFile.close();
	inFile.close();
	
	inFile.open("booklist.txt");
	readData ( inFile, info );
	outFile.open( "sequentialSearch.txt" );
	sequentialSearch ( outFile, info );
	outFile.close();
	


	_getch();
	return 0;
}

void readData ( ifstream& inFile, book info [][5] )
{
	int i = 0;
	while ( (!inFile.eof()) && (i<3) )
	{
		for ( int j=0; j<5; j++ )
		{
			inFile.getline ( info[i][j].bookname, 30, ';' );
			inFile.getline ( info[i][j].genre, 30, ';' );
			inFile.getline( info[i][j].language, 25, ';');
			inFile >> info[i][j].page>> info[i][j].yearpublished>> info[i][j].price;
			inFile >> ws;
		}
		i++;
	}
}

void findyear ( ofstream& outFile ,book info[][5])
{
	outFile<<"Book List By Year Published: "<<endl;
	
	outFile<<"\nBOOK PUBLISHED ON 2015"<<endl;
	outFile<<"============================"<<endl<<endl;
	
	for ( int i=0; i<3; i++ )
	{
		for ( int j=0; j<5; j++ )
		{
			if ( info[i][j].yearpublished == 2015 )
			{
				outFile <<"Title: "<< info[i][j].bookname<<endl;
				outFile <<"Genre: "<<info[i][j].genre<<endl;
				outFile <<"Language: " <<info[i][j].language<<endl;
				outFile <<"Pages: "<< info[i][j].page<<endl;
				outFile <<"Year Published: "<< info[i][j].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[i][j].price<<endl<<endl;
			}
			
		}
	}
	
	outFile<<"\nBOOK PUBLISHED ON 2016"<<endl;
	outFile<<"============================"<<endl<<endl;
	
	for ( int i=0; i<3; i++ )
	{
		for ( int j=0; j<5; j++ )
		{
			if ( info[i][j].yearpublished == 2016 )
			{
				outFile <<"Title: "<< info[i][j].bookname<<endl;
				outFile <<"Genre: "<<info[i][j].genre<<endl;
				outFile <<"Language: " <<info[i][j].language<<endl;
				outFile <<"Pages: "<< info[i][j].page<<endl;
				outFile <<"Year Published: "<< info[i][j].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[i][j].price<<endl<<endl;
			}
			
		}
	}
	
	outFile<<"\nBOOK PUBLISHED ON 2017"<<endl;
	outFile<<"============================"<<endl<<endl;
	
	for ( int i=0; i<3; i++ )
	{
		for ( int j=0; j<5; j++ )
		{
			if ( info[i][j].yearpublished == 2017 )
			{
				outFile <<"Title: "<< info[i][j].bookname<<endl;
				outFile <<"Genre: "<<info[i][j].genre<<endl;
				outFile <<"Language: " <<info[i][j].language<<endl;
				outFile <<"Pages: "<< info[i][j].page<<endl;
				outFile <<"Year Published: "<< info[i][j].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[i][j].price<<endl<<endl;
			}
			
		}
	}
	
	outFile<<"\nBOOK PUBLISHED ON 2018"<<endl;
	outFile<<"============================"<<endl<<endl;
	
	for ( int i=0; i<3; i++ )
	{
		for ( int j=0; j<5; j++ )
		{
			if ( info[i][j].yearpublished == 2018 )
			{
				outFile <<"Title: "<< info[i][j].bookname<<endl;
				outFile <<"Genre: "<<info[i][j].genre<<endl;
				outFile <<"Language: " <<info[i][j].language<<endl;
				outFile <<"Pages: "<< info[i][j].page<<endl;
				outFile <<"Year Published: "<< info[i][j].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[i][j].price<<endl<<endl;
			}
			
		}
	}
	
	outFile<<"\nBOOK PUBLISHED ON 2019"<<endl;
	outFile<<"============================"<<endl<<endl;
	
	for ( int i=0; i<3; i++ )
	{
		for ( int j=0; j<5; j++ )
		{
			if ( info[i][j].yearpublished == 2019 )
			{
				outFile <<"Title: "<< info[i][j].bookname<<endl;
				outFile <<"Genre: "<<info[i][j].genre<<endl;
				outFile <<"Language: " <<info[i][j].language<<endl;
				outFile <<"Pages: "<< info[i][j].page<<endl;
				outFile <<"Year Published: "<< info[i][j].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[i][j].price<<endl<<endl;
			}
			
		}
	}
	
}

void findgenre ( ofstream& outFile ,book info[][5])
{
	
	outFile << "Book list by genre: " << endl;
	outFile << "\n\n----------------------------------"<<endl<<endl;
	outFile << "== C O M E D Y ==" <<endl;
	outFile << "----------------------------------"<<endl<<endl;
	
	for ( int a=0; a<3; a++ )
	{
		for ( int b=0; b<5; b++ )
		{
			if ( strcmp ( info[a][b].genre, "Comedy" ) == 0 )
			{
				outFile <<"Title: "<< info[a][b].bookname<<endl;
				outFile <<"Genre: "<<info[a][b].genre<<endl;
				outFile <<"Language: " <<info[a][b].language<<endl;
				outFile <<"Pages: "<< info[a][b].page<<endl;
				outFile <<"Year Published: "<< info[a][b].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[a][b].price<<endl<<endl;	
			}
		}
	}
	
	outFile << "\n\n----------------------------------"<<endl;
	outFile << "== F A C T =="<<endl;
	outFile << "----------------------------------"<<endl<<endl;
	
	for ( int a=0; a<3; a++ )
	{
		for ( int b=0; b<5; b++ )
		{
			if ( strcmp ( info[a][b].genre, "Fact" ) == 0 )
			{
				outFile <<"Title: "<< info[a][b].bookname<<endl;
				outFile <<"Genre: "<<info[a][b].genre<<endl;
				outFile <<"Language: " <<info[a][b].language<<endl;
				outFile <<"Pages: "<< info[a][b].page<<endl;
				outFile <<"Year Published: "<< info[a][b].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[a][b].price<<endl<<endl;
				
			}
		}
	}
	
	outFile << "\n\n----------------------------------"<<endl;
	outFile << "== E D U C A T I O N  =="<<endl;
	outFile << "----------------------------------"<<endl<<endl;
	
	for ( int a=0; a<3; a++ )
	{
		for ( int b=0; b<5; b++ )
		{
			if ( strcmp ( info[a][b].genre, "Education" ) == 0 )
			{
				outFile <<"Title: "<< info[a][b].bookname<<endl;
				outFile <<"Genre: "<<info[a][b].genre<<endl;
				outFile <<"Language: " <<info[a][b].language<<endl;
				outFile <<"Pages: "<< info[a][b].page<<endl;
				outFile <<"Year Published: "<< info[a][b].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[a][b].price<<endl<<endl;
			}
		}
	}
	
	outFile << "\n\n----------------------------------"<<endl;
	outFile << "== R O M A N C E  =="<<endl;
	outFile << "----------------------------------"<<endl<<endl;

	for ( int a=0; a<3; a++ )
	{
		for ( int b=0; b<5; b++ )
		{
			if ( strcmp ( info[a][b].genre, "Romance" ) == 0 )
			{
				outFile <<"Title: "<< info[a][b].bookname<<endl;
				outFile <<"Genre: "<<info[a][b].genre<<endl;
				outFile <<"Language: " <<info[a][b].language<<endl;
				outFile <<"Pages: "<< info[a][b].page<<endl;
				outFile <<"Year Published: "<< info[a][b].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[a][b].price<<endl<<endl;
			}
		}
	}
	
	outFile << "\n\n----------------------------------"<<endl;
	outFile << "== F I C T I O N  =="<<endl;
	outFile << "----------------------------------"<<endl<<endl;

	
	for ( int a=0; a<3; a++ )
	{
		for ( int b=0; b<5; b++ )
		{
			if ( strcmp ( info[a][b].genre, "Fiction" ) == 0 )
			{
				outFile <<"Title: "<< info[a][b].bookname<<endl;
				outFile <<"Genre: "<<info[a][b].genre<<endl;
				outFile <<"Language: " <<info[a][b].language<<endl;
				outFile <<"Pages: "<< info[a][b].page<<endl;
				outFile <<"Year Published: "<< info[a][b].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[a][b].price<<endl<<endl;
				
			}
		}
	}
	
}

void findlanguage ( ofstream& outFile ,book info[][5])//
{
	outFile << "B O O K   L I S T   B Y   L A N G U A G E"<<endl;
	outFile << "-----------------------------------------"<<endl<<endl;
	outFile << "-----------------"<<endl;
	outFile << "## M E L A Y U ##"<<endl;
	outFile << "-----------------"<<endl;
	
	for ( int x=0; x<3; x++)
	{
		for ( int y=0; y<5; y++ )
		{
			if (strcmp(info[x][y].language, "Melayu") == 0 )
			{
				outFile <<"Title: "<< info[x][y].bookname<<endl;
				outFile <<"Genre: "<<info[x][y].genre<<endl;
				outFile <<"Language: " <<info[x][y].language<<endl;
				outFile <<"Pages: "<< info[x][y].page<<endl;
				outFile <<"Year Published: "<< info[x][y].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[x][y].price<<endl<<endl;
			}
		}
			
	}	
	
	outFile << "\n\n\n-----------------"<<endl;
	outFile << "## E N G L I S H ##"<<endl;
	outFile << "-----------------"<<endl;
	
	for ( int x=0; x<3; x++ )
	{
		for ( int y=0; y<5; y++ )
		{
			if (strcmp(info[x][y].language, "English") == 0 )
			{
				outFile <<"Title: "<< info[x][y].bookname<<endl;
				outFile <<"Genre: "<<info[x][y].genre<<endl;
				outFile <<"Language: " <<info[x][y].language<<endl;
				outFile <<"Pages: "<< info[x][y].page<<endl;
				outFile <<"Year Published: "<< info[x][y].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[x][y].price<<endl<<endl;
			}
		}
			
	}	
	

	outFile << "\n\n\n-----------------"<<endl;
	outFile << "## M A N D A R I N ##"<<endl;
	outFile << "-----------------"<<endl;
	
	for ( int x=0; x<3; x++ )
	{
		for ( int y=0; y<5; y++ )
		{
			if (strcmp(info[x][y].language, "Mandarin") == 0 )
			{
				outFile <<"Title: "<< info[x][y].bookname<<endl;
				outFile <<"Genre: "<<info[x][y].genre<<endl;
				outFile <<"Language: " <<info[x][y].language<<endl;
				outFile <<"Pages: "<< info[x][y].page<<endl;
				outFile <<"Year Published: "<< info[x][y].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[x][y].price<<endl<<endl;
			}
		}	
	}	
}

void findprice ( ofstream& outFile ,book info[][5])
{
	
	outFile << "+++++++++++++++++++++++++++++++++" << endl;
	outFile << "Book under RM15.00 : " << endl;
	outFile << "+++++++++++++++++++++++++++++++++" << endl << endl;
	
	for (int x=0;x<3;x++)
	{
		for (int y=0;y<5;y++)
		{
			if (info[x][y].price < 15.00 )
			{
				outFile <<"Title: "<< info[x][y].bookname<<endl;
				outFile <<"Genre: "<<info[x][y].genre<<endl;
				outFile <<"Language: " <<info[x][y].language<<endl;
				outFile <<"Pages: "<< info[x][y].page<<endl;
				outFile <<"Year Published: "<< info[x][y].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[x][y].price<<endl<<endl;
					
			}
		}
	}
	
	outFile << "\n\n+++++++++++++++++++++++++++++++++" << endl;
	outFile << "Book from RM15.00 until RM20.00 : " << endl;
	outFile << "+++++++++++++++++++++++++++++++++" << endl << endl;
	
	for (int x=0;x<3;x++)
	{
		for (int y=0;y<5;y++)
		{
			if (info[x][y].price >= 15.00  && info[x][y].price < 20.00 )
			{
				outFile <<"Title: "<< info[x][y].bookname<<endl;
				outFile <<"Genre: "<<info[x][y].genre<<endl;
				outFile <<"Language: " <<info[x][y].language<<endl;
				outFile <<"Pages: "<< info[x][y].page<<endl;
				outFile <<"Year Published: "<< info[x][y].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[x][y].price<<endl<<endl;
				
			}
		}
	}
	
	outFile << "\n\n+++++++++++++++++++++++++++++++++" << endl;
	outFile << "Book from RM20.00 until RM30.00 : " << endl;
	outFile << "+++++++++++++++++++++++++++++++++" << endl << endl;
	
	for (int x=0;x<3;x++)
	{
		for (int y=0;y<5;y++)
		{
			if (info[x][y].price >= 30.00  && info[x][y].price < 40.00 )
			{
				outFile <<"Title: "<< info[x][y].bookname<<endl;
				outFile <<"Genre: "<<info[x][y].genre<<endl;
				outFile <<"Language: " <<info[x][y].language<<endl;
				outFile <<"Pages: "<< info[x][y].page<<endl;
				outFile <<"Year Published: "<< info[x][y].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[x][y].price<<endl<<endl;
				
			}
		}
	}
	
	outFile << "\n\n+++++++++++++++++++++++++++++++++" << endl;
	outFile << "Book from RM30.00 until RM40.00 : " << endl;
	outFile << "+++++++++++++++++++++++++++++++++" << endl << endl;
	
	for (int x=0;x<3;x++)
	{
		for (int y=0;y<5;y++)
		{
			if (info[x][y].price >= 30.00  && info[x][y].price < 40.00 )
			{
				outFile <<"Title: "<< info[x][y].bookname<<endl;
				outFile <<"Genre: "<<info[x][y].genre<<endl;
				outFile <<"Language: " <<info[x][y].language<<endl;
				outFile <<"Pages: "<< info[x][y].page<<endl;
				outFile <<"Year Published: "<< info[x][y].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[x][y].price<<endl<<endl;
				
			}
		}
	}
	
		
	outFile << "\n\n+++++++++++++++++++++++++++++++++" << endl;
	outFile << "Book from RM40.00 until RM50.00 : " << endl;
	outFile << "+++++++++++++++++++++++++++++++++" << endl << endl;
	
	for (int x=0;x<3;x++)
	{
		for (int y=0;y<5;y++)
		{
			if (info[x][y].price >= 40.00  && info[x][y].price < 50.00 )
			{
				outFile <<"Title: "<< info[x][y].bookname<<endl;
				outFile <<"Genre: "<<info[x][y].genre<<endl;
				outFile <<"Language: " <<info[x][y].language<<endl;
				outFile <<"Pages: "<< info[x][y].page<<endl;
				outFile <<"Year Published: "<< info[x][y].yearpublished<<endl;
				outFile<<setprecision(2)<<fixed;
				outFile <<"Price: RM"<< info[x][y].price<<endl<<endl;
				
			}
		}
	}
	
}

void countNaverage ( ofstream& outFile ,book info[][5])//
{
	int bookMelayu =0;
	int bookEnglish =0;
	int bookMandarin =0;
	
	double totPMelayu = 0;
	double totPEnglish = 0;
	double totPMandarin = 0;

	double avePriceMelayu = 0;
	double avePriceEnglish = 0;
	double avePriceMandarin = 0;
	
	
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
		
			if (strcmp(info[i][j].language,"Melayu")==0)
			{
				bookMelayu++;
			}
			else if (strcmp(info[i][j].language,"English")==0)
			{
				bookEnglish++;
			}
			else if (strcmp(info[i][j].language,"Mandarin")==0)
			{
				bookMandarin++;
			}
		}
	}
	
	
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<5;j++)
		{
			if (strcmp(info[i][j].language,"Melayu")==0)
			{
				totPMelayu = info[i][j].price + totPMelayu ;
			}
			else if (strcmp(info[i][j].language,"English")==0)
			{
				totPEnglish = info[i][j].price + totPEnglish ;

			}
			else if (strcmp(info[i][j].language,"Mandarin")==0)
			{
				totPMandarin = info[i][j].price + totPMandarin ;
			}
		}
	}
	
	avePriceMelayu = totPMelayu / bookMelayu ;
	avePriceEnglish = totPEnglish / bookEnglish ;
	avePriceMandarin = totPMandarin / bookMandarin ;
	
	outFile << "Total books for Melayu : " << bookMelayu << endl << endl;
	outFile << "Total books for English : " << bookEnglish << endl << endl;
	outFile << "Total books for Mandarin : " << bookMandarin << endl << endl;
	
	outFile << "\n\nAverage price for books Melayu : " << avePriceMelayu << endl << endl;
	outFile << "Average price for books English : " << avePriceEnglish << endl << endl;
	outFile << "Average price for books Mandarin : " << avePriceMandarin << endl << endl;


}

void minNMax ( ofstream& outFile ,book info[][5])
{
	int indexMinR; //row
	int indexMinC; //column
	int indexMaxR;
	int indexMaxC;
	double min=info[0][0].price;
	double max=info[2][4].price;
	
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<5;j++)
		{
			if(min < info[i][j].price)
			{
				indexMinR = i;
				indexMinC = j;
				min = info[i][j].price;
			}
			else if(max > info[i][j].price)
			{
				indexMaxR = i;
				indexMaxC = j;
				max = info[i][j].price;
			}
		}
	}

	outFile <<setprecision(2) << fixed;
	outFile << "============================" <<endl << endl;
	outFile << "Maximum price (Highest Price) : " << "RM " << info[indexMinR][indexMinC].price << endl;
	outFile << "\nBook Detail :" << endl << endl;
	outFile << "Title: " << info[indexMinR][indexMinC].bookname << endl;
	outFile << "Genre: " << info[indexMinR][indexMinC].genre << endl;
	outFile << "Pages: " << info[indexMinR][indexMinC].page << endl;
	outFile << "Year Published: " << info[indexMinR][indexMinC].yearpublished << endl;
	outFile << "Price: RM" << info[indexMinR][indexMinC].price<< endl;
	outFile << "Language: " << info[indexMinR][indexMinC].language << endl << endl;

	/*outFile <<setprecision(2) << fixed;
	outFile << "============================" <<endl << endl;
	outFile << "Minimum price (Lowest Price) : " << "RM " << info[indexMinR][indexMinC].price << endl;
	outFile << "\nBook Detail :" << endl << endl;
	outFile << "Title: " << info[indexMinR][indexMinC].bookname << endl;
	outFile << "Genre: " << info[indexMinR][indexMinC].genre << endl;
	outFile << "Pages: " << info[indexMinR][indexMinC].page << endl;
	outFile << "Year Published: " << info[indexMinR][indexMinC].yearpublished << endl;
	outFile << "Price: RM" << info[indexMinR][indexMinC].price<< endl;
	outFile << "Language: " << info[indexMinR][indexMinC].language << endl << endl;*/

	outFile << "============================" <<endl << endl;
	outFile << "Minimum price (Lowest Price) : " << "RM " << info[indexMaxR][indexMaxC].price << endl;
	outFile << "\nBook Detail :" << endl << endl;
	outFile << "Title: " << info[indexMaxR][indexMaxC].bookname << endl;
	outFile << "Genre: " << info[indexMaxR][indexMaxC].genre << endl;
	outFile << "Pages: " << info[indexMaxR][indexMaxC].page << endl;
	outFile << "Year Published: " << info[indexMaxR][indexMaxC].yearpublished << endl;
	outFile << "Price: RM" << info[indexMaxR][indexMaxC].price << endl;
	outFile << "Language: " << info[indexMaxR][indexMaxC].language << endl<< endl;

}

void sorting ( ofstream& outFile ,book info[][5])
{
	char temp_name[30];
	
	outFile << "Ascending order " << endl; 
	
	for (int ia=0; ia <3; ia++) //sorting price
  	{  
		for (int ja=0; ja <3; ja++)
		{
    		for (int ib=0; ib <5; ib++)
    		{
      			for (int jb=0; jb <5; jb++)
      			{
			        if(info[ia][ib].price < info[ja][jb].price)
			        {
			            double temp = info[ia][ib].price;
			            info[ia][ib].price = info[ja][jb].price;
			            info[ja][jb].price = temp;
			        
			        } 
				}				 
			}				 
		}				 
	}				 
	
	
	for ( int x=0; x<3; x++)
	{
		for ( int y=0; y<5; y++ )
		{
			/*outFile <<"Title: "<< info[x][y].bookname<<endl;
			outFile <<"Genre: "<<info[x][y].genre<<endl;
			outFile <<"Language: " <<info[x][y].language<<endl;
			outFile <<"Pages: "<< info[x][y].page<<endl;
			outFile <<"Year Published: "<< info[x][y].yearpublished<<endl;
			outFile<<setprecision(2)<<fixed;*/
			outFile <<"Price: RM"<< info[x][y].price<<"("<<info[x][y].bookname<<")"<<endl;
		}		
	}	 
	
	
	
}

void sequentialSearch ( ofstream& outFile ,book info[][5])
{
	bool found=0;
	//int i=0;
	int indrow=0;
	int indcol=0;
	
	for ( int i=0; i<3; i++ && !found )
	{
		for ( int j=0; j<5; j++ && !found )
		{
			if(strcmp( info[i][j].bookname, "Lawak Kampus" ) == 0 )
			{
				found =1;
				indrow=i;
				indcol=j;
			}
			
			//else
			//i++;
		
		}
	}
	
	if (found)
	{
		strcpy( info[indrow][indcol].bookname, "Science Computer" );
		strcpy( info[indrow][indcol].genre, "Facts" );
		strcpy( info[indrow][indcol].language, "English" );
		info[indrow][indcol].page = 111;
		info[indrow][indcol].yearpublished = 2019;
		info[indrow][indcol].price = 22.50;
	}
	
	
	
	for ( int i=0;i<3; i++ )
	{
		for ( int j=0; j<5; j++ )
		{
			outFile<<info[i][j].bookname<<";"<<info[i][j].genre<<";"<<info[i][j].language<<";"<<info[i][j].page<<" "<<info[i][j].yearpublished<<" ";
			outFile<<setprecision(2)<<fixed;
			outFile << info[i][j].price<<endl;
		}
	}
	
	

}









	
