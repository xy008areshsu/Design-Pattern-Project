#include "StockGrabber.h"
#include "Observer.h"
#include "ObserverA.h"
#include "ObserverB.h"

#include <vector>
#include <memory>

using namespace std;


int main()
{

	StockGrabber stock_center {1, 2, 3};

	shared_ptr<Observer> obA {new ObserverA()};  // using shared_ptr here, 
	                                             //otherwise unqiue_ptr will transher the 
	                                             //ownership of obA to observers vector, 
	                                             //and then it will be deleted. So below using 
	                                             //unattach will not work, since obA is already be deleted.
	shared_ptr<Observer> obB {new ObserverB()};

	stock_center.attach(obA);
	stock_center.attach(obB);
	stock_center.update_ibm_price(10);
	stock_center.update_ibm_price(100);
	stock_center.update_ibm_price(9);
	stock_center.update_apple_price(10);
	stock_center.update_goog_price(10);

	// obA->update(1, 2, 3);

	stock_center.unattach(obA);
	stock_center.update_ibm_price(10);
	stock_center.update_ibm_price(100);
	stock_center.update_ibm_price(9);
	stock_center.update_apple_price(10);
	stock_center.update_goog_price(10);



	return 0;
}