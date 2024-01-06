object server_app: Tserver_app
  Left = 384
  Top = 183
  Caption = 'Ludo(Server)'
  ClientHeight = 583
  ClientWidth = 866
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -15
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 18
  object username_server: TLabel
    Left = 208
    Top = 192
    Width = 476
    Height = 34
    Alignment = taCenter
    Caption = 'Welcome Player. Please change your name'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Impact'
    Font.Style = []
    ParentFont = False
  end
  object host_btn: TBitBtn
    Left = 336
    Top = 304
    Width = 209
    Height = 65
    Caption = 'Host a game'
    TabOrder = 0
  end
  object chn_btn: TBitBtn
    Left = 336
    Top = 400
    Width = 209
    Height = 65
    Caption = 'Change your name'
    TabOrder = 1
    OnClick = chn_btnClick
  end
  object quit_btn: TBitBtn
    Left = 336
    Top = 496
    Width = 209
    Height = 65
    Caption = 'Exit the game'
    TabOrder = 2
    OnClick = quit_btnClick
  end
end
