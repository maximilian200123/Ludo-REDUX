object ch_name: Tch_name
  Left = 512
  Top = 316
  Caption = 'Name changing...'
  ClientHeight = 306
  ClientWidth = 558
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object name_edit: TEdit
    Left = 160
    Top = 56
    Width = 217
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = False
    TabOrder = 0
    TextHint = 'Enter your username'
  end
  object ok_btn: TBitBtn
    Left = 64
    Top = 152
    Width = 145
    Height = 49
    Caption = 'O.K'
    TabOrder = 1
    OnClick = ok_btnClick
  end
  object cancel_btn: TBitBtn
    Left = 336
    Top = 152
    Width = 145
    Height = 49
    Caption = 'Cancel'
    TabOrder = 2
    OnClick = cancel_btnClick
  end
end
