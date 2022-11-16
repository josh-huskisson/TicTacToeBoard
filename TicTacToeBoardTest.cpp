/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, smoke_test)
{
	ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, change_turn_1)
{
	//X goes first
	TicTacToeBoard obj;
	Piece correct = O;

	ASSERT_EQ(correct, obj.toggleTurn());
}

TEST(TicTacToeBoardTest, change_turn_2)
{
	TicTacToeBoard obj;
	Piece correct = X;
	obj.toggleTurn();

	ASSERT_EQ(correct, obj.toggleTurn());
}


