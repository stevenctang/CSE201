/*
+-----------------------------------------------------------+
|                                                           |
|                     EggCarton                             |
+-----------------------------------------------------------+
| - brownEggs:int                                           |
| - whiteEggs:int                                           |
|                                                           |
+-----------------------------------------------------------+
|                                                           |
| + EggCarton(brownEggs:int, whiteEggs:int)                 |
| + addBrownEggs(n:int) : bool                              |
| + addWhiteEggs(n:int) : bool                              |
| + getTotalEggs():int                                      |
|                                                           |
+-----------------------------------------------------------+

*/

class EggCarton
{
	public:
		EggCarton(int brownEggs, int whiteEggs);
		bool addBrownEggs(int n);
		bool addWhiteEggs(int n);
		int getTotalEggs();
		
	private:
		int brownEggs;
		int whiteEggs;
};
