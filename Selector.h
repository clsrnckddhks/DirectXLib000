//[main.h 2017/03/18 - 2017/03/18 Flauzino Vinicius]_________________
#ifndef _SELECTOR_H_
#define _SELECTOR_H_
//[�C���N���[�h�t�@�C�� 2017/03/18 - 2017/03/18]_____________________
#include <windows.h>
#include <d3dx9.h>
#include <stdio.h>
#include <time.h>
//[���C�u�����[�t�@�C�� 2017/03/18 - 2017/03/18]_____________________
#pragma comment( lib, "d3d9.lib" )
#pragma comment( lib, "d3dx9.lib" )
#pragma comment( lib, "ws2_32.lib" )
//[�x�� 2017/03/18 - 2017/03/18]______________________________________
#pragma warning( disable: 4996 )
//[�\���̐錾 2017/03/18 - 2017/03/18]________________________________
typedef struct {
	int    nType;
	SOCKET sock;

	void Init( void );
	void Update( void );
} NETWORK;
typedef struct {
	float fPosX;
	float fPosY;
	float fPosZ;
	float fRotZ;
} CAMERA, *PCAMERA;
typedef struct {
	LPDIRECT3DTEXTURE9 pTexture;
	LPD3DXSPRITE       pSprite;
	float              Width;
	float              Height;
	void Load( char[] );
	void Draw( float fPosX, float fPosY, float fPosZ, float fRotZ );
	void DrawPixel( int X, int Y, float fPosX, float fPosY );
	void StartDraw( void );
	void EndDraw( void );
} PICTURE;
//[�萔��` 2017/03/18 - 2017/03/18]_________________________________
#define WINDOW_WIDTH  ( 800 )
#define WINDOW_HEIGHT ( 600	)
#define WINDOW_TITLE  "�E�B���h�E�^�C�g��"
#define PI ( 3.14159265359f / 360.0f )
#define KEY_NUM ( 256 )
//[�}�N����` 2017/03/18 - 2017/03/18]_______________________________
#define SAFE_RELEASE( p ) { if( p ) { ( p )->Release(); ( p ) = NULL; } }
//[�֐��v���g�^�C�v 2017/03/18 - 2017/03/18]_________________________
LRESULT CALLBACK WndProc( HWND, UINT, WPARAM, LPARAM );
HRESULT InitD3d( HWND );
void FreeDx( void );
void Init( void );
void Update( void );
void Load( void );
void Draw( void );
int  GetKey( WPARAM wParam );
void ShowFPS( void );
void SetMainCamera( CAMERA * Camera );
//[END]______________________________________________________________
#endif