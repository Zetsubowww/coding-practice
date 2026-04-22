#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Workouts{
    string name;
    string muscleGroup;
    int sets;
};

void addSets(const vector<Workouts>& workout);

int main(){
    vector<Workouts> workout;
    string nameInput, muscleInput;
    int setsInput, numWorkouts;

    cout<<"How many workouts do you have in mind?: ";
    cin>>numWorkouts;

    while(numWorkouts > 0){
        cin.ignore();

        cout<<"What's the workout's name?: ";
        getline(cin, nameInput);

        cout<<"What's the muscle group?: ";
        cin>>muscleInput;

        cout<<"How many sets?: ";
        cin>>setsInput;
        cout<<endl;

        workout.push_back({nameInput, muscleInput, setsInput});

        numWorkouts--;
    }

    addSets(workout);

    return 0;
}


//const ensures that the vector is not modified
//referencing the vector prevents it from making a full copy. makes it more efficient
void addSets(const vector<Workouts>& workout){ 
    int chest = 0,
        shoulder = 0,
        bicep = 0,
        back = 0,
        core = 0, 
        legs = 0, 
        triceps = 0;

    for(int i = 0; i < workout.size(); i++){
        if(workout[i].muscleGroup == "chest"){
            chest += workout[i].sets;
        } 
        else if(workout[i].muscleGroup == "shoulder"){
            shoulder += workout[i].sets;
        } 
        else if(workout[i].muscleGroup == "bicep"){
            bicep += workout[i].sets;
        } 
        else if(workout[i].muscleGroup == "back"){
            back += workout[i].sets;
        } 
        else if(workout[i].muscleGroup == "core"){
            core += workout[i].sets;
        } 
        else if(workout[i].muscleGroup == "legs"){
            legs += workout[i].sets;
        } 
        else if(workout[i].muscleGroup == "triceps"){
            triceps += workout[i].sets;
        }
        else{
            cout<<"This is not a muscle group.\n";
        }
    }

    cout<<"You have "<<chest<<" sets for chest\n"
        <<"You have "<<shoulder<<" sets for shoulder\n"
        <<"You have "<<bicep<<" sets for bicep\n"
        <<"You have "<<back<<" sets for back\n"
        <<"You have "<<core<<" sets for core\n"
        <<"You have "<<legs<<" sets for legs\n"
        <<"You have "<<triceps<<" sets for triceps";
}