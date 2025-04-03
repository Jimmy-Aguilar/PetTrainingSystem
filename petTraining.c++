#ifndef PET_TRAINING_SYSTEM_H
#define PET_TRAINING_SYSTEM_H

#include <vector>
#include <string>

class Trick;
class Reward;

class PetTrainingSystem {
private:
    int activeSessions;
    std::vector<Trick> availableTricks;
    std::vector<int> skillLevels;

public:
    void startTraining();
    void endTraining();
};

class Pet {
private:
    int petID;
    std::string species;
    std::vector<Trick> learntTricks;
    int trainingAptitude;
    std::string mood;

public:
    void performTrick();
    void respondToCommand();
};

class Sim {
private:
    int simID;
    int petTrainingSkill;
    int patience;
    int relationship;
    std::string mood;

public:
    void trainPet();
    void giveReward();
};

class TrainingSession {
private:
    int sessionID;
    int duration;
    Trick* currentTrick;
    int progress;

public:
    void teachTrick();
    void endSession();
};

class Trick {
private:
    int trickID;
    int difficulty;
    int requiredSkillLevel;
    std::string animation;

public:
    void execute();
};

class Reward {
private:
    int rewardID;
    std::string type;
    int effectiveness;
    std::string animation;

public:
    void apply();
};

class Progression {
private:
    int currentLevel;
    int experiencePoints;
    std::vector<Trick> unlockedTricks;
    std::vector<int> milestones;

public:
    void levelUp();
};

#endif // PET_TRAINING_SYSTEM_H
