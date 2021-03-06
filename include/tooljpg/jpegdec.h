
#ifndef _TOOLS_JPEGDEC_H_
#define _TOOLS_JPEGDEC_H_


#include "jpegdecbase.h"

//===================================================
//
//		CJpegDecoder class
//
//===================================================


class CJpegDecoder : public CJpegDecBase
{
public:
	CJpegDecoder(int size = DEFAULT_JPEGDATASIZE);

public:
	void	Open(PTJpegIndex pinfo);

protected:
	void	blockdec(int *curdc, int mode);
	void	generateBrc(int *QTable, int sftC, int *output);
	int		getShiftValue(int *QTable);
};

//===================================================
//
//		CJpegDecoder1 class
//
//===================================================


class CJpegDecoder1 : public CJpegDecBase
{
public:
	CJpegDecoder1(int size = DEFAULT_JPEGDATASIZE);

public:
	void	Open(PTJpegIndex pinfo);

protected:
	void	blockdec(int *curdc, int mode);

protected:

private:
	double		m_Lqt[64], m_Cqt[64];
};


//===================================================
//
//		CJpegDecoder2 class
//
//===================================================

class CJpegDecoder2 : public CJpegDecBase
{
public:
	CJpegDecoder2(int size = DEFAULT_JPEGDATASIZE);

public:
	void	Open(PTJpegIndex pinfo);

protected:
	void	blockdec(int *curdc, int mode);

private:
	int		m_LQtbl[64], m_CQtbl[64];
};


#endif
