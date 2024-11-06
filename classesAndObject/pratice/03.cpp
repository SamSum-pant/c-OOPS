#include<iostream>
#include<string>  // Include string header
using namespace std;

class Webseries {
    public:
    string Name;
    double Rating;
    string Genre;  // Corrected from String to string
};

int main()
{
   Webseries W;

   cout << "Enter WEBseries Name: ";
   cin >> W.Name;

   cout << "Enter IMDB Rating: ";
   cin >> W.Rating;

   cout << "Enter Genre of That Webseries: ";
   cin >> W.Genre;

   cout << "\nWebseries: " << W.Name << "\n";
   cout << "IMDB Rating: " << W.Rating << "\n";
   cout << "Genre: " << W.Genre << "\n";

   return 0;
}
