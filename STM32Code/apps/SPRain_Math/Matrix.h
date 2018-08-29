//-------------------------------------------//
//��ͷ�ļ�����һЩͨ���ľ�������
//-------------------------------------------//
#ifndef _MATRIX_H_
#define _MATRIX_H_

#include<math.h>
#define DF float
//#include "Include.h"

//-------------------------------------------//
//�������ƣ�MatrixAdd
//�������ܣ�����ӷ�
//����������
//����˵����
//����ֵ��
//����ʱ�䣺2004.05.18
//�޸�ʱ�䣺2004.05.28
//����ʱ�䣺2004.07.28
//���Է��������ܲ���
//-------------------------------------------//
void MatrixAdd( float* fMatrixA,float* fMatrixB,float* Result,
		unsigned int m,unsigned int n )
;

//-------------------------------------------//
//�������ƣ�MatrixSub
//�������ܣ��������
//��������:
//����˵��:
//����ֵ��
//����ʱ�䣺2004.05.18
//�޸�ʱ�䣺2004.05.28
//����ʱ�䣺2004.07.28
//���Է��������ܲ���
//-------------------------------------------//
void MatrixSub( float* fMatrixA,float* fMatrixB,float* Result,
		unsigned int m,unsigned int n )
;
//-------------------------------------------//
//�������ƣ�MatrixMultiply
//�������ܣ�����˷�
//����������
//����˵����
//����ֵ��
//����ʱ�䣺2004.05.18
//�޸�ʱ�䣺2004.05.28(��Ϊָ�����)��2004.06.02(�����ǰ���ж�����)
//����ʱ�䣺2004.07.28
//���Է��������ܲ���
//-------------------------------------------//

void MatrixMultiply( float* fMatrixA,unsigned int uRowA,unsigned int uColA,
float* fMatrixB,unsigned int uRowB,unsigned int uColB,float* MatrixResult )
;

//-------------------------------------------//
//�������ƣ�MatrixTranspose
//�������ܣ�����ת��
//����������
//����˵����
//����ֵ��
//����ʱ�䣺2004.05.18
//�޸�ʱ��?2004.05.28?//����ʱ�䣺2004.07.28
//���Է��������ܲ���
//-------------------------------------------//
void MatrixTranspose(float* fMatrixA,unsigned int m,unsigned n,float* fMatrixB)
;
void MatrixProduct(float* A, int m, int n, float* B, int k, float* C)							 
;
//-------------------------------------------//
//�������ƣ�MatrixE
//�������ܣ���λ��������?//����������
//����˵����
//����ֵ��
//����ʱ�䣺2004.05.19
//�޸�ʱ�䣺
//����ʱ�䣺2004.07.28
//���Է��������ܲ���
//-------------------------------------------//
void MatrixE(float* fMatrixA,unsigned int n)
;

//-------------------------------------------//
//�������ƣ�MatrixDet2
//�������ܣ�2�׾�������ʽ��ֵ
//����������
//����˵����
//����ֵ��
//����ʱ�䣺2004.05.19
//�޸�ʱ�䣺
//����ʱ�䣺
//���Է�����
//-------------------------------------------//
double MatrixDet2(float* fMatrixA)
;
//-------------------------------------------//
//�������ƣ�MatrixInverse2
//�������ܣ�2�׾�������
//����������
//����˵��
//����ֵ��
//����ʱ�䣺2004.05.18
//�޸�ʱ�䣺
//����ʱ��:
//���Է�����
//-------------------------------------------//
int MatrixInverse2(float* fMatrixA,float* fMatrixB)
;

//-------------------------------------------//
//�������ƣ�
//�������ܣ���������
//����������
//����˵����
//����ֵ��
//����ʱ�䣺004.05.18
//�޸�ʱ�䣺?//����ʱ�䣺2004.07.28
//���Է��������ܲ���
//-------------------------------------------//
int MatrixInverse(float* fMatrixA,int n,float ep)
;
void UD(float * A,int  n,float * U,float * D);
//-------------------------------------------//
//�������ƣ�Norm
//�������ܣ��������
//����������||A||
//����˵����
//����ֵ��
//����ʱ�䣺2004.07.28
//�޸�ʱ�䣺?//����ʱ�䣺2004.07.28
//���Է��������ܲ���
//-------------------------------------------//
DF Norm(float*fMatrixA,int iRow,int iCol)
;
#endif
