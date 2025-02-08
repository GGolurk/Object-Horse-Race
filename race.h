#ifndef RACE_H_EXIST
#define RACE_H_EXIST

class Race{
	private:
		const static int TRACK_LENGTH = 15;
		const static int NUM_HORSES = 5;
		int horses[5] = {0, 0, 0, 0, 0};
	public:
		Race();
		void runGame();
};

#endif
