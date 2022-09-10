#include <iostream>
using namespace std;


class Person{
  private:
    string name;
    string surname;
    string nationality;
    int age;
  public:
    Person(){

    }
    Person(string pName, string pSurname, string pNationality, int pAge){
        name=pName;
        surname=pSurname;
        nationality=pNationality;
        age=pAge;
    }
    ~Person(){

    }



    void setName(string pName){
        name=pName;
    }
    void setSurname(string pSurname){
        surname=pSurname;
    }
    void setNationality(string pNationality){
        nationality=pNationality;
    }
    void setAge(int pAge){
        age=pAge;
    }
    string getName(){
        return name;
    }
    string getSurname(){
        return surname;
    }
    string getNationality(){
        return nationality;
    }
    int getAge(){
        return age;
    }

    void showData(){
        cout << "Imiê: " << name << "\nNazwisko: " << surname << "\nNarodowoœæ: " << nationality << "\nWiek: " << age << endl;
    }
};

class Spotify: public Person{
  private:
    string username;
    int accountAge;
    string typeOfAccount;
    int amountOfFollowers;
  public:
    Spotify(){

    }
    Spotify(string pName, string pSurname, string pNationality, int pAge, string pUsername, int pAccountAge, string pTypeOfAccount, int pAmountOfFollowers) : Person(pName, pSurname, pNationality, pAge){
        username=pUsername;
        accountAge=pAccountAge;
        typeOfAccount=pTypeOfAccount;
        amountOfFollowers=pAmountOfFollowers;
    }
    ~Spotify(){

    }



    void setUsername(string pUsername){
        username=pUsername;
    }
    void setAccountAge(int pAccountAge){
        accountAge=pAccountAge;
    }
    void setTypeOfAccount(string pTypeOfAccount){
        typeOfAccount=pTypeOfAccount;
    }
    void setAmountOfFollowers(int pAmountOfFollowers){
        amountOfFollowers=pAmountOfFollowers;
    }
    string getUsername(){
        return username;
    }
    int getAccountAge(){
        return accountAge;
    }
    string getTypeOfAccount(){
        return typeOfAccount;
    }
    int getAmountOfFollowers(){
        return amountOfFollowers;
    }

    void showData(){
        cout << "Imiê: " << getName() << "\nNazwisko: " << getSurname() << "\nNarodowoœæ: " << getNationality() << "\nWiek: " << getAge() << "\nNazwa u¿ytkownika: " << username << "\nWiek konta: " << accountAge << "\nTyp konta: " << typeOfAccount << "\nLiczba obserwuj¹cych: " << amountOfFollowers << endl;
    }
};

class User: public Spotify{
  private:
    int amountOfPlaylists;
    int amountOfFriends;
  public:
    User(){

    }
    User(string pName, string pSurname, string pNationality, int pAge, string pUsername, int pAccountAge, string pTypeOfAccount, int pAmountOfFollowers, int pAmountOfPlaylists, int pAmountOfFriends) : Spotify(pName, pSurname, pNationality, pAge, pUsername, pAccountAge, pTypeOfAccount, pAmountOfFollowers){
        amountOfPlaylists=pAmountOfPlaylists;
        amountOfFriends=pAmountOfFriends;
    }
    ~User(){

    }



    void setAmountOfPlaylists(int pAmountOfPlaylits){
        amountOfPlaylists=pAmountOfPlaylits;
    }
    void setAmountOfFriends(int pAmountOfFriends){
        amountOfFriends=pAmountOfFriends;
    }
    int getAmountOfPlaylists(){
        return amountOfPlaylists;
    }
    int getAmountOfFriends(){
        return amountOfFriends;
    }

    void showData(){
        cout << "Imiê: " << getName() << "\nNazwisko: " << getSurname() << "\nNarodowoœæ: " << getNationality() << "\nWiek: " << getAge() << "\nNazwa u¿ytkownika: " << getUsername() << "\nWiek konta: " << getAccountAge() << "\nTyp konta: " << getTypeOfAccount() << "\nLiczba obserwuj¹cych: " << getAmountOfFollowers() << "\nLiczba playlist: " << amountOfPlaylists << "\nLiczba przyjació³: " << amountOfFriends << endl;
    }
};

class Artist: public Spotify{
  private:
    string mostPopularTrackName;
    int amountOfTracks;
    int amountOfAlbums;
  public:
    Artist(){

    }
    Artist(string pName, string pSurname, string pNationality, int pAge, string pUsername, int pAccountAge, string pTypeOfAccount, int pAmountOfFollowers, string pMostPopularTrackName, int pAmountOfTracks, int pAmountOfAlbums) : Spotify(pName, pSurname, pNationality, pAge, pUsername, pAccountAge, pTypeOfAccount, pAmountOfFollowers){
        mostPopularTrackName=pMostPopularTrackName;
        amountOfTracks=pAmountOfTracks;
        amountOfAlbums=pAmountOfAlbums;
    }
    ~Artist(){

    }



    void setMostPopularTrackName(string pMostPopularTrackName){
        mostPopularTrackName=pMostPopularTrackName;
    }
    void setAmountOfTracks(int pAmountOfTracks){
        amountOfTracks=pAmountOfTracks;
    }
    void setAmountOfAlbums(int pAmountOfAlbums){
        amountOfAlbums=pAmountOfAlbums;
    }
    string getMostPopularTrackName(){
        return mostPopularTrackName;
    }
    int getAmountOfTracks(){
        return amountOfTracks;
    }
    int getAmountOfAlbums(){
        return amountOfAlbums;
    }

    void showData(){
        cout << "Imiê: " << getName() << "\nNazwisko: " << getSurname() << "\nNarodowoœæ: " << getNationality() << "\nWiek: " << getAge() << "\nNazwa u¿ytkownika: " << getUsername() << "\nWiek konta: " << getAccountAge() << "\nTyp konta: " << getTypeOfAccount() << "\nLiczba obserwuj¹cych: " << getAmountOfFollowers() << "\nTytu³ najpopularniejszej piosenki: " << mostPopularTrackName << "\nLiczba utworów: " << amountOfTracks << "\nLiczba albumów: " << amountOfAlbums << endl;
    }
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    User user1("Piotr", "Gierba", "Polska", 17, "Pioxini", 4, "Premium", 9, 26, 0);
    user1.showData();

    cout << endl << endl;

    Artist artist1=Artist("Marshall", "Mathers", "Amerykañska", 50, "Eminem", 8, "Non-Premium", 52413394, "Till I Collapse", 276, 10);
    artist1.showData();

    return 0;
}
