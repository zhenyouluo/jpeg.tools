#ifndef __TOOLIMGSTAT_YUVSTAT_H__
#define __TOOLIMGSTAT_YUVSTAT_H__


#include "toolmath/baseconvert.h"

class CYuvStat : public CBaseConvert
{
public:
	CYuvStat(void);
	virtual ~CYuvStat(void);

protected:
	//int Yuv411Msg(int * des, char * src, int srcfmt, int unit);
	//int Yuv420Msg(int * des, char * src, int srcfmt, int unit);
	void Yuv422Msg(int * des, char * src, int srcfmt, int unit);
	//int Yuv444Msg(int * des, char * src, int srcfmt, int unit);

public:
	CDbugTools m_dbug;

protected:
	int m_nCountY;
	int m_nCountU;
	int m_nCountV;
};

#endif
