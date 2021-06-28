#include <iostream>
#include <string>
#include <vector>


class Track
{
  public:
    const char* name = "track";
    const char* date = "1996/03/15";
    int sec = 0;
};

class Player
{
  public:

    Track track;
    std::vector<Track> list;

    void writeIn() {
        for (int i = 0; i < 3; ++i) {
            list.push_back(track);
            list.push_back(track);
            list.push_back(track);
        }
    }






    void play ()
   {
       std::cout << "\nWhat song do you want to listen to?\n";
       std::string song;
       std::cin >> song;

       for (int i = 0; i < 3; ++i)
       {
           if (song == list[i].name) {
               std::cout << "\n" << list[i].name << " - date of creation: "
               << list[i].date << ", duration: " << list[i].sec << " seconds";
           }
       }

   }
};



int main() {

    Player track;
    std::cout << "Enter command: ";
    std::string command;
    std::cin >> command;

    while (command != "exit")
    {
        if (command == "play")
        {
            track.play();
        }

        else if (command == "pause")
        {
            track.play();
        }

        else if (command == "next")
        {
            track.play();
        }

        else if (command == "stop")
        {
            track.play();
        }
    }
    return 0;
}
