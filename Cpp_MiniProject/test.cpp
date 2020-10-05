#include "base.h"
#include "operations.h"
#include <gtest/gtest.h>
namespace {

class food : public ::testing::Test 
{

protected:
  void SetUp() { 
	der.get_data();
}
void TearDown() {}
derived der;
};
TEST_F(food, getdetails ) {
 // EXPECT_NE((Trip*)NULL, trips.findTripById("SG304"));
 	derived ft("Asparagus","20","0","4","2","2","10","2","2");
 // Trip *pt = &ft;
 	  EXPECT_STREQ("Asparagus", ft.get_name().c_str());
 	   EXPECT_STREQ("20", ft.get_calories().c_str());
 	    EXPECT_STREQ("0", ft.get_fat().c_str());
 	     EXPECT_STREQ("4", ft.get_carbohydrates().c_str());
 	      EXPECT_STREQ("2", ft.get_fiber().c_str());
 	       EXPECT_STREQ("2", ft.get_protein().c_str());
 	        EXPECT_STREQ("10", ft.get_vitaminA().c_str());
 	         EXPECT_STREQ("2", ft.get_calcium().c_str());
 	      EXPECT_STREQ("2", ft.get_iron().c_str());
 
  }
TEST_F(food, max_protein) {
 // EXPECT_NE((Trip*)NULL, trips.findTripById("SG304"));
  EXPECT_EQ(25, der.get_maxprotein());
}
TEST_F(food, min_fat) {
 // EXPECT_NE((Trip*)NULL, trips.findTripById("SG304"));
  EXPECT_EQ(0, der.get_minfat());
}




/*
TEST_F(LTTSperformance, lowestpricedate ) {
 // EXPECT_NE((Trip*)NULL, trips.findTripById("SG304"));
  EXPECT_EQ("2019-10-03", per.day_low());
}
*/
}


