//----------------------------------------------------------------------------------------------
// Mp4Definition.h
//----------------------------------------------------------------------------------------------
#ifndef MP4DEFINITION_H
#define MP4DEFINITION_H

const DWORD MP4_READ_SIZE = 65536;

#define ATOM_MIN_SIZE_HEADER		8
#define ATOM_MIN_READ_SIZE_HEADER	16

#define ATOM_TYPE_FTYP  0x66747970
#define ATOM_TYPE_FREE  0x66726565
#define ATOM_TYPE_MOOV  0x6D6F6F76
#define ATOM_TYPE_MDAT  0x6d646174
#define ATOM_TYPE_WIDE  0x77696465
#define ATOM_TYPE_UUID  0x75756964
#define ATOM_TYPE_SKIP  0x736b6970

#define ATOM_TYPE_MVHD  0x6d766864
#define ATOM_TYPE_TRAK  0x7472616B
#define ATOM_TYPE_UDTA  0x75647461
#define ATOM_TYPE_IODS  0x696f6473
#define ATOM_TYPE_META  0x6d657461

#define ATOM_TYPE_TKHD  0x746b6864
#define ATOM_TYPE_EDTS  0x65647473
#define ATOM_TYPE_ELST  0x656c7374
#define ATOM_TYPE_MDIA  0x6d646961
#define ATOM_TYPE_TREF  0x74726566
#define ATOM_TYPE_TAPT  0x74617074

#define ATOM_TYPE_MDHD  0x6d646864
#define ATOM_TYPE_HDLR  0x68646c72
#define ATOM_TYPE_MINF  0x6d696e66
#define ATOM_TYPE_STBL  0x7374626c
#define ATOM_TYPE_VMHD  0x766d6864
#define ATOM_TYPE_SMHD  0x736d6864
#define ATOM_TYPE_GMHD  0x676d6864
#define ATOM_TYPE_DINF  0x64696e66
#define ATOM_TYPE_NMHD  0x6e6d6864
#define ATOM_TYPE_HMHD  0x686d6864

#define ATOM_TYPE_STSD  0x73747364
#define ATOM_TYPE_STTS  0x73747473
#define ATOM_TYPE_CTTS  0x63747473
#define ATOM_TYPE_STSS  0x73747373
#define ATOM_TYPE_STPS  0x73747073
#define ATOM_TYPE_STSC  0x73747363
#define ATOM_TYPE_STSZ  0x7374737a
#define ATOM_TYPE_STCO  0x7374636f
#define ATOM_TYPE_CO64  0x636f3634
#define ATOM_TYPE_SDTP  0x73647470
#define ATOM_TYPE_SBGP  0x73626770
#define ATOM_TYPE_SGPD  0x73677064
#define ATOM_TYPE_CSLG  0x63736c67

#define HANDLER_TYPE_VIDEO  0x76696465
#define HANDLER_TYPE_SOUND  0x736F756E
#define HANDLER_TYPE_TEXT   0x74657874
#define HANDLER_TYPE_ODSM   0x6f64736d
#define HANDLER_TYPE_SDSM   0x7364736d
#define HANDLER_TYPE_HINT   0x68696e74
#define HANDLER_TYPE_CLCP   0x636c6370
#define HANDLER_TYPE_SUBP   0x73756270
#define HANDLER_TYPE_TMCD   0x746d6364

#define ATOM_TYPE_AVC1  0x61766331
#define ATOM_TYPE_MP4V  0x6d703476
#define ATOM_TYPE_MP4A  0x6d703461
#define ATOM_TYPE_TEXT  0x74657874
#define ATOM_TYPE_MP4S  0x6d703473
#define ATOM_TYPE_AC_3  0x61632d33
#define ATOM_TYPE_RTP_  0x72747020
#define ATOM_TYPE_EC_3  0x65632d33
#define ATOM_TYPE_RAW_  0x72617720
#define ATOM_TYPE_TX3G  0x74783367
#define ATOM_TYPE_C608  0x63363038
#define ATOM_TYPE_TCMD  0x746d6364
#define ATOM_TYPE_DIVX  0x64697678
#define ATOM_TYPE__MP3  0x2e6d7033

#define ATOM_TYPE_AVCC  0x61766343

#define ATOM_TYPE_PASP  0x70617370
#define ATOM_TYPE_BTRT  0x62747274
#define ATOM_TYPE_ESDS  0x65736473
#define ATOM_TYPE_COLR  0x636f6c72
#define ATOM_TYPE_GAMA  0x67616d61

inline DWORD MAKE_DWORD_HOSTORDER(const BYTE* pData){

	return ((DWORD*)pData)[0];
}

inline UINT64 MAKE_DWORD_HOSTORDER64(const BYTE* pData){

	return ((UINT64*)pData)[0];
}

inline DWORD MAKE_DWORD(const BYTE* pData){

	return _byteswap_ulong(MAKE_DWORD_HOSTORDER(pData));
}

inline UINT64 MAKE_DWORD64(const BYTE* pData){

	return _byteswap_uint64(MAKE_DWORD_HOSTORDER64(pData));
}

#endif