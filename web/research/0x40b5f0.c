BOOL sub_40B5F0()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  HFONT FontA; // esi
  _BYTE v6[1024]; // [esp+20h] [ebp-400h] BYREF

  sub_412770();
  sub_411780();
  sub_4114F0(a1: 0, lpFileName: aImageLoadBmp, a3: 16711935, a4: 0);
  v0 = sub_411780();
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v0 + 16))(a1: v0, a2: 0);
  v1 = sub_411780();
  (*(void (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v1 + 12))(
    a1: v1,
    a2: 0,
    a3: 160,
    a4: 180,
    a5: 320,
    a6: 90,
    a7: 0,
    a8: 0);
  v2 = sub_411780();
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 40))(a1: v2);
  sub_4121D0(a1: 0, a2: 5, a3: 90);
  sub_4121D0(a1: 0, a2: 8, a3: 88);
  sub_4121D0(a1: 0, a2: 6, a3: 38);
  sub_4121D0(a1: 0, a2: 7, a3: 40);
  sub_4121D0(a1: 0, a2: 1, a3: 38);
  sub_4121D0(a1: 0, a2: 3, a3: 40);
  sub_4121D0(a1: 0, a2: 2, a3: 37);
  sub_4121D0(a1: 0, a2: 4, a3: 39);
  sub_4121D0(a1: 0, a2: 9, a3: 90);
  sub_4121D0(a1: 0, a2: 10, a3: 27);
  sub_4121D0(a1: 0, a2: 11, a3: 9);
  sub_4121D0(a1: 1, a2: 5, a3: 4);
  sub_4121D0(a1: 1, a2: 8, a3: 5);
  sub_4121D0(a1: 1, a2: 6, a3: 0);
  sub_4121D0(a1: 1, a2: 7, a3: 1);
  sub_4121D0(a1: 1, a2: 7, a3: 6);
  sub_4121D0(a1: 1, a2: 1, a3: 0);
  sub_4121D0(a1: 1, a2: 3, a3: 1);
  sub_4121D0(a1: 1, a2: 2, a3: 2);
  sub_4121D0(a1: 1, a2: 4, a3: 3);
  sub_4121D0(a1: 1, a2: 9, a3: 4);
  sub_411780();
  sub_4114F0(a1: 0, lpFileName: aImageCharBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 10, lpFileName: aImageBgBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 1, lpFileName: aImageLifeBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 2, lpFileName: aImageScoreBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 3, lpFileName: aImageTutiBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 4, lpFileName: aImageBil10Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 5, lpFileName: aImageBil20Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 6, lpFileName: aImageBil30Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 7, lpFileName: aImageBougyoBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 8, lpFileName: aImageWazaBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 9, lpFileName: aImageJumpBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 12, lpFileName: aImageTitleBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 13, lpFileName: aImageHahen1Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 14, lpFileName: aImageHahen2Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 15, lpFileName: aImageHahen3Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 16, lpFileName: aImageIconBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 17, lpFileName: aImageSlashBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 18, lpFileName: aImageKumoBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 19, lpFileName: aImageYouiBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 20, lpFileName: aImageHajimeBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 21, lpFileName: aImageComboBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 22, lpFileName: aImageZanBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 23, lpFileName: aImageSyuenBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 24, lpFileName: aImageRenzanBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 25, lpFileName: aImageTenBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 26, lpFileName: aImageSeikaBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 27, lpFileName: aImageBougyobar, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 28, lpFileName: aImageWazabarBm, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 29, lpFileName: aImageWazabar2B, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 31, lpFileName: aImageScoreSBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 32, lpFileName: aImageTenSBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 33, lpFileName: aImageRenzanSBm, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 34, lpFileName: aImageIBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 35, lpFileName: aImageDemoBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 36, lpFileName: aImageSaiengiBm, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 37, lpFileName: aImageSaiengi2B, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 38, lpFileName: aImageModoruBmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 39, lpFileName: aImageModoru2Bm, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 30, lpFileName: aData001Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 11, lpFileName: aData002Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 40, lpFileName: aData003Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 41, lpFileName: aData004Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 42, lpFileName: aData005Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 43, lpFileName: aData006Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 44, lpFileName: aData007Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 45, lpFileName: aData008Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 46, lpFileName: aData009Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 47, lpFileName: aData010Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 48, lpFileName: aData011Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 49, lpFileName: aData012Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 50, lpFileName: aData013Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 51, lpFileName: aData014Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 52, lpFileName: aData015Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 53, lpFileName: aData016Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 54, lpFileName: aData017Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 55, lpFileName: aData018Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 56, lpFileName: aData019Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 57, lpFileName: aData020Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 58, lpFileName: aData021Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_4114F0(a1: 59, lpFileName: aData022Bmp, a3: 16711935, a4: 0);
  sub_411780();
  sub_411760(a1: v6);
  v3 = sub_411780();
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 28))(a1: v3, a2: v6);
  sub_411780();
  dword_41F6D0 = sub_411410(color: 0xFE9656u);
  sub_411780();
  dword_41F6D4 = sub_411410(color: 0x2020A0u);
  sub_411780();
  dword_41F6D8 = sub_411410(color: 0x343434u);
  sub_413400(pszFileName: pszFileName, a2: 4);
  sub_413400(pszFileName: aSoundSelectWav, a2: 3);
  sub_413400(pszFileName: aSoundSlashWav, a2: 0);
  sub_413400(pszFileName: aSoundSlash2Wav, a2: 1);
  sub_413400(pszFileName: aSoundSlash3Wav, a2: 2);
  sub_413400(pszFileName: aSoundBougyoWav, a2: 5);
  sub_413400(pszFileName: aSoundTubureWav, a2: 6);
  sub_413400(pszFileName: aSoundHakaiWav, a2: 7);
  sub_413400(pszFileName: aSoundMoveWav, a2: 8);
  sub_413400(pszFileName: aSoundJumpWav, a2: 9);
  sub_413400(pszFileName: aSoundTyakutiWa, a2: 10);
  sub_413400(pszFileName: aSoundWazaWav, a2: 11);
  sub_413400(pszFileName: aSoundKaminariW, a2: 12);
  sub_413400(pszFileName: aSoundSibireWav, a2: 13);
  sub_413400(pszFileName: aSoundGorogoroW, a2: 14);
  sub_413400(pszFileName: aSoundIwaWav, a2: 15);
  FontA = CreateFontA(
            cHeight: 28,
            cWidth: 14,
            cEscapement: 0,
            cOrientation: 0,
            cWeight: 400,
            bItalic: 0,
            bUnderline: 0,
            bStrikeOut: 0,
            iCharSet: 0x81u,
            iOutPrecision: 0,
            iClipPrecision: 0,
            iQuality: 0,
            iPitchAndFamily: 0,
            pszFaceName: pszFaceName);
  if ( FontA == nullptr )
    FontA = CreateFontA(
              cHeight: 28,
              cWidth: 14,
              cEscapement: 0,
              cOrientation: 0,
              cWeight: 400,
              bItalic: 0,
              bUnderline: 0,
              bStrikeOut: 0,
              iCharSet: 0x81u,
              iOutPrecision: 0,
              iClipPrecision: 0,
              iQuality: 0,
              iPitchAndFamily: 0,
              pszFaceName: &byte_41E064);
  *(_DWORD *)(sub_411780() + 1568) = FontA;
  dword_41F798 = 0;
  dword_41F79C = (int)sub_40C050;
  *(_DWORD *)dword_41F6DC = sub_410280();
  *(_DWORD *)Buffer = sub_410310();
  return CreateDirectoryA(lpPathName: PathName, lpSecurityAttributes: nullptr);
}