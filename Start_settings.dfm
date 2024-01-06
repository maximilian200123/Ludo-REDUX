object start_set: Tstart_set
  Left = 494
  Top = 309
  Caption = 'Start Settings'
  ClientHeight = 355
  ClientWidth = 658
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Lucida Sans Unicode'
  Font.Style = []
  Font.Quality = fqProof
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 16
  object settings_label: TLabel
    Left = 128
    Top = 56
    Width = 413
    Height = 32
    Caption = 'Choose from server or client application'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -25
    Font.Name = 'Impact'
    Font.Style = []
    Font.Quality = fqProof
    ParentFont = False
  end
  object client_btn: TButton
    Left = 40
    Top = 148
    Width = 193
    Height = 65
    Caption = 'Start Ludo Client'
    TabOrder = 0
    OnClick = client_btnClick
  end
  object server_btn: TButton
    Left = 424
    Top = 148
    Width = 193
    Height = 65
    Caption = 'Start Ludo Server'
    TabOrder = 1
    OnClick = server_btnClick
  end
  object quit: TButton
    Left = 232
    Top = 248
    Width = 193
    Height = 65
    Caption = 'Exit'
    TabOrder = 2
    OnClick = quitClick
  end
end
