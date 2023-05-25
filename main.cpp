#include <iostream>
#include <utility>
using namespace std;

class Carpenter{

public:
        string toolOne;
        string toolTwo;
        string toolThree;
        string toolFour;
        string toolFive;
        string toolSix;
        string toolSeven;
        string toolEight;



        string Components [11] = {"=>flat_headScrews",
                                  "=>philips_headScrews",
                                  "=>hex_Screws",
                                  "=>timber_Sheets",
                                  "=>timber_Planks",
                                  "=>woodAdhesive ",
                                  "=>drawer_Knobs",
                                  "=>door_Knobs",
                                  "=>wardrobe_Legs",
                                  "=>door_Hinges"};


    string getToolOne()  {
        return toolOne;
    }

    void setToolOne( string tool_one) {
        Carpenter::toolOne = std::move(tool_one);
    }

    string getToolTwo()  {
        return toolTwo;
    }

    void setToolTwo( string tool_two) {
        Carpenter::toolTwo = std::move(tool_two);
    }

    string getToolThree()  {
        return toolThree;
    }

    void setToolThree( string tool_three) {
        Carpenter::toolThree = std::move(tool_three);
    }

    string getToolFour()  {
        return toolFour;
    }

    void setToolFour( string tool_four) {
        Carpenter::toolFour = std::move(tool_four);
    }

    string getToolFive()  {
        return toolFive;
    }

    void setToolFive( string tool_five) {
        Carpenter::toolFive = std::move(tool_five);
    }

    string getToolSix()  {
        return toolSix;
    }

    void setToolSix( string tool_six) {
        Carpenter::toolSix = std::move(tool_six);
    }

    string getToolSeven()  {
        return toolSeven;
    }

    void setToolSeven( string tool_seven) {
        Carpenter::toolSeven = std::move(tool_seven);
    }

    string getToolEight()  {
        return toolEight;
    }

    void setToolEight( string tool_eight) {
        Carpenter::toolEight = std::move(tool_eight);
    }

    Carpenter(string tool_one, string tool_two, string tool_three, string tool_four,string tool_five, string tool_six, string tool_seven, string tool_eight){
        toolOne = std::move(tool_one);
        toolTwo = std::move(tool_two);
        toolThree = std::move(tool_three);
        toolFour = std::move(tool_four);
        toolFive = std::move(tool_five);
        toolSix = std::move(tool_six);
        toolSeven = std::move(tool_seven);
        toolEight = std::move(tool_eight);

    }


        void buildWardrobe(){
            cout << "To construct a wardrobe I will need the following items: \n"
            << Components[0] << "\n" << Components[1] << "\n" << Components[3]
            << "\n" << Components[4] << "\n" << Components[5] << "\n" << Components[7]
            << "\n" << Components[8] << "\n" << Components[9] << "\n" << endl;

            cout << "Wardrobe build complete!" << endl;
            cout << endl;
        }

        void buildChestOfDrawers(){
            cout << "To construct a wardrobe I will need the following items: \n"
                 << Components[1] << "\n" << Components[3] << "\n" << Components[5]
                 << "\n" << Components[6] << "\n" << endl;

            cout << "Chest of Drawers build complete!" << endl;
            cout << endl;
        }

        void buildBedFrame(){

            cout << "To construct a wardrobe I will need the following items: \n"
                 << Components[1] << "\n" << Components[2] << "\n" << Components[4]
                 << "\n" << Components[5] << "\n" << endl;

            cout << "Bedframe build complete!" << endl;
            cout << endl;
        }


};

int main() {

    Carpenter carpenter = Carpenter("Dewalt Hammer",
                                    "Stanley TenonSaw",
                                    "Bosch ElectricScrewDriver",
                                    "BlackNDecker JigSaw",
                                    "Bosch StapleGun",
                                    "Dewalt PowerDrill",
                                    "BlackNDecker Router",
                                    "Dewalt SkillSaw");


    cout << "The Carpenter's collection of  tools include: " << carpenter.getToolOne() << "\n" << carpenter.getToolTwo() << "\n"
            << carpenter.getToolThree() << "\n" << carpenter.getToolFour() << "\n" << carpenter.getToolFive() << "\n"
            << carpenter.getToolSix() << "\n"<< carpenter.getToolSeven() << "\n"<< carpenter.getToolEight() << "\n"<< endl;


    carpenter.buildBedFrame();
    carpenter.buildWardrobe();
    carpenter.buildChestOfDrawers();




    return 0;
}
