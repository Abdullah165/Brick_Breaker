#include "Board.h"

Board::Board()
{
	m_Height = 30;
	m_Width = 50;
}

int Board::get_Width() const
{
	return m_Width;
}

int Board::get_Height() const
{
	return m_Height;
}

