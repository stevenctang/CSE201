	// Exam 2 practice 

	Fraction f1(8,6); // this is 8/6//

	assert(f1.isImproper()==true);
	assert(f1.getNumerator()==8); // gets the current numerator //
	assert(f1.getDenominator()==6);
	assert(f1.isLucky()==true);
	assert(f1.integerLowerBound()==1);

	f1.simplifiy()
	assert(f1.getNumerator()==4); // Simplified the numerator by 2//
	assert(f1.getDenominator()==3); // did the same thing//

	// this is a new fraction //
	Fraction f2(4,8);
	assert(f2.isImproper()== false); // not improper because it's 4 over 8//
	assert(f2.isLucky()== true);

	f2.simplifiy()
	assert(f2.getNumerator()==1) // divide numerator by 4//
	assert(f2.getDenominator()==2) // repeat//

	// new fraction //
	Fraction f3(14,39);
	assert(f4.isLucky==false);
	
	// This is the fraction.h class//
	
	classFraction{
	public:
	Fraction(int numerator, int denominator);
	int getNumerator() const;
	int getDenominator() const;
	void setDenominator(int denominator);
	void setNumerator(int numerator);
	bool isLucky() const;
	void simplifiy();
	bool isImproper() const;

	private:
	int numerator;
	int denominator;


	// calling functions //

	Fraction:: Fraction ( int numerator, int denominator);
		// the "Fraction::" is the scope//
	int Fraction:: getNumerator() const{
		return numerator;
	int Fraction:: getDenominator() const{
		return denominator;
	int Fraction:: setNumerator ( int numerator){
		return this->numerator = numerator;
	int Fraction:: setDenominator (int denominator){
		return this-> denominator = denominator;
	bool Fraction:: isLucky()const{
		return ( numerator%7=0) &&(denominator %13!=0);
	void Fraction:: simplify(){
	// Hardest one//

	bool Fraction:: isImproper() const{
		return numerator>denominator;
	int Fraction:: integerLowerBound()const{
		return numerator/denominator;
