//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Ludo_server.cpp", server_app);
USEFORM("Start_settings.cpp", start_set);
USEFORM("Ludo_client.cpp", client_app);
USEFORM("Change_name.cpp", ch_name);
USEFORM("Client_game.cpp", game_client);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Calypso");
		Application->CreateForm(__classid(Tstart_set), &start_set);
		Application->CreateForm(__classid(Tclient_app), &client_app);
		Application->CreateForm(__classid(Tch_name), &ch_name);
		Application->CreateForm(__classid(Tserver_app), &server_app);
		Application->CreateForm(__classid(Tgame_client), &game_client);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
