#ifndef AUTOMATA
#define AUTOMATA

#include <vector>

class Automata
{
public:
	Automata();
	~Automata();

	void setSigma(std::vector<char>& new_sigma);
	std::vector<char> setQ();
	void setQ(std::vector<char>& new_Q);
	std::vector<char> getD();
	void setI(std::vector<char>& new_I);
	std::vector<char> getI();
	void setF(std::vector<char>& new_F);
	std::vector<char> getF();
	void setDelta(std::vector<std::vector<std::vector<char>>& new_delta);
	std::vector<std::vector<std::vector<char>>> getDelta();


private:
	std::vector<char> sigma;
	std::vector<char> Q;
	std::vector<char> I;
	std::vector<char> F;
	std::vector<std::vector<std::vector<char>>> delta;
};

#endif // AUTOMATA
