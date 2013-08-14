/*
**********************************************************************************
**�ļ�˵����C8051F��Ƭ��ģ��I2C������ͷ�ļ�                                                           
**�ļ����ƣ�IIC.H                                                     
**�������ڣ�2013.                                                         
**�� �� �ˣ�XZY                                                                   
**---------------------------------------------------------------------------------*
**�޸����ڣ�                                                                       
**�޸�˵����                                                                       
**********************************************************************************
*/

#ifndef  IIC_H
#define  IIC_H
#include "user_type.h"

/*
*************************************************************************************
**�������ƣ������ӵ�ַ�������Ͷ��ֽ����ݺ���                                       **
**�������ܣ����������ߵ����͵�ַ���ӵ�ַ,���ݣ��������ߵ�ȫ����,������             **
**          ��ַsla���ӵ�ַsuba������������sָ������ݣ�p�����ӵ�ַ				   **
**          8λ��16λѡ�񣬷���no���ֽڡ�                                          **
**          �������1��ʾ�����ɹ��������������                                  **
**ע�⣺    ʹ��ǰ�����ѽ������ߡ�                                                 **
**��ڲ�����...                                                                    **
**���ز������ɹ�/ʧ��                                                              **
*************************************************************************************
*/
extern Bool ISendStr(Uint8 sla,Uint16 suba,Uint8 * s,Uint16 no,Uint8 p)reentrant;



/*
*************************************************************************************
**�������ƣ������ӵ�ַ������ȡ���ֽ����ݺ���                                       **
**�������ܣ����������ߵ����͵�ַ���ӵ�ַ,�����ݣ��������ߵ�ȫ����,������           **
**          ��ַsla���ӵ�ַsuba�����������ݷ���sָ��Ĵ洢����p�����ӵ�ַ          **
**          8λ��16λѡ�񣬶�no���ֽڡ�                                            **
**          �������1��ʾ�����ɹ��������������								   **
**ע�⣺    ʹ��ǰ�����ѽ������ߡ�                                                 **
**��ڲ�����...                                                                    **
**���ز������ɹ�/ʧ��                                                              **
*************************************************************************************
*/
extern Bool IRcvStr(Uint8 sla,Uint16 suba,Uint8 * s,Uint16 no,Uint8 p)reentrant;

/*******************************************************************
                    �����ӵ�ַ�������Ͷ��ֽ����ݺ���               
����ԭ��: bit  ISendStrExt(uchar sla,uchar *s,uchar no);  
����:     ���������ߵ����͵�ַ���ӵ�ַ,���ݣ��������ߵ�ȫ����,������
          ��ַsla������������sָ������ݣ�����no���ֽڡ�
          �������1��ʾ�����ɹ��������������
ע�⣺    ʹ��ǰ�����ѽ������ߡ�
********************************************************************/
//extern Bool ISendStrExt(Uint8 sla,Uint8 *s,Uint8 no);



/*****************************************************************************
                            END FILE
*****************************************************************************/

#endif