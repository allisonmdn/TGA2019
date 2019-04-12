#include "CarregadorAssets.h"



CarregadorAssets::CarregadorAssets()
{
}


CarregadorAssets::~CarregadorAssets()
{
}

bool CarregadorAssets::Carregador(std::fstream & f_arquivos_rec)
{
	bool b_loader_status = true;
	std::string def_resource_type;
	std::string def_resource_name;
	std::string def_resource_local;
	std::string::size_type size;

	//sprite_sheets
	std::string def_n_animations; 
	std::string def_n_max_frames;

	//sounds
	std::string vol; 

	//font
	std::string tamanho;
	std::string estilo;
	std::string glifoPrim;
	std::string glifoUlt;
	//std::string qualidadeEscala;

	
	
	if (f_arquivos_rec)
	{
		char q_resources = f_arquivos_rec.get();
		this->n_assets = q_resources - '0';
		gDebug.depurar("num_Recursos", this->n_assets);

		while (!f_arquivos_rec.eof())
		{
			if (!f_arquivos_rec.fail())
			{
				
				//Sprite sheets.
				f_arquivos_rec >> def_resource_type >> def_resource_name >> def_resource_local >> def_n_animations >> def_n_max_frames;
				
				
					   //SPRITE SHEET BEGIN

				if (def_resource_type == "sprite_sheet")
				{						
					if (f_arquivos_rec.fail())
					{
						gDebug.depurar("Erro", f_arquivos_rec.fail());
						gDebug.depurar("tipo_do_recurso", def_resource_type);
						gDebug.depurar("nome_do_recurso", def_resource_name);
						gDebug.depurar("caminho_do_recurso", def_resource_local);
						gDebug.depurar("numero_animacoes", def_n_animations);
						gDebug.depurar("n_max_frames", def_n_max_frames);
					}

					gRecursos.carregarSpriteSheet(def_resource_name, def_resource_local, std::stoi(def_n_animations, &size),
						std::stoi(def_n_max_frames, &size), QUALIDADE_ESCALA_BAIXA);

					if (!gRecursos.carregouSpriteSheet(def_resource_name))
					{
						gDebug.erro("Erro ao carregar recursos (Sprite Sheets)");

						return false;
					}
				}

				
						 //SPRITE SHEET END

				         //SOUNDS BEGIN
				if (def_resource_type == "sounds")
				{
					if (f_arquivos_rec.fail())
					{
						gDebug.depurar("Erro", f_arquivos_rec.fail());
						gDebug.depurar("tipo_do_recurso", def_resource_type);
						gDebug.depurar("nome_do_recurso", def_resource_name);
						gDebug.depurar("caminho_do_recurso", def_resource_local);
					}
					gRecursos.carregarAudio(def_resource_name, def_resource_local);
					
					if (!gRecursos.carregouAudio(def_resource_name))
					{
						gDebug.erro("Erro ao carregar recursos (Sounds)");

						return false;

					}
				}		   				
				         //SOUNDS END

				        //MUSIC BEGIN

				if (def_resource_type == "music")
				{
					if (f_arquivos_rec.fail())
					{
						gDebug.depurar("Erro", f_arquivos_rec.fail());
						gDebug.depurar("tipo_do_recurso", def_resource_type);
						gDebug.depurar("nome_do_recurso", def_resource_name);
						gDebug.depurar("caminho_do_recurso", def_resource_local);
					}
					gRecursos.carregarMusica(def_resource_name, def_resource_local);

					if (!gRecursos.carregouMusica(def_resource_name))
					{
						gDebug.erro("Erro ao carregar recursos (Music_Background)");

						return false;

					}

				}
				          //MUSIC END

						  //FONT BEGIN

				if (def_resource_type == "font")
				{
					if (f_arquivos_rec.fail())
					{
						gDebug.depurar("Erro", f_arquivos_rec.fail());
						gDebug.depurar("tipo_do_recurso", def_resource_type);
						gDebug.depurar("nome_do_recurso", def_resource_name);
						gDebug.depurar("caminho_do_recurso", def_resource_local);
					}
					gRecursos.carregarFonte(def_resource_name, def_resource_local, std::stoi(tamanho, &size), std::stoi(glifoPrim, &size), std::stoi(glifoUlt, &size), QUALIDADE_ESCALA_BAIXA);

					//tamanho padrão = 16.
					//estilo padrão = 0.
					//glifos padrões = 16.
					//qualidade escala padrão = QUALIDADE_ESCALA_BAIXA == 0.

					if (!gRecursos.carregouFonte(def_resource_name))
					{
						gDebug.erro("Erro ao carregar recursos (Font)");

						return false;

					}

				}
				          //FONT END
			}			

		}	 
		return true; 
	}
}
