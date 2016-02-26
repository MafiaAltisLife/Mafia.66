waitUntil {!isNull player && player == player};
if(player diarySubjectExists "rules")exitwith{};

player createDiarySubject ["credits","Credits"];
player createDiarySubject ["farms","Precos dos farms"];
player createDiarySubject ["serverrules","General Rules"];
player createDiarySubject ["policerules","Police Procedures/Rules"];
player createDiarySubject ["safezones","Safe Zones (No Killing)"];
//player createDiarySubject ["civrules","Civilian Rules"];
player createDiarySubject ["illegalitems","Illegal Activity"];
//player createDiarySubject ["gangrules","Gang Rules"];
//player createDiarySubject ["terrorrules","Terrorism Rules"];
player createDiarySubject ["controles","Controles"];

/*  Example
	player createDiaryRecord ["", //Container
		[
			"", //Subsection
				"
					TEXT HERE<br/><br/>
				"
		]
	];
*/

	player createDiaryRecord ["credits",
		[
			"ArmaLife",
				"
					ArmaLife is a GitHub project which aims to update and keep adding new features to the original 'Altis Life RPG' by Tonic.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["farms",
		[
			"Preco dos farms",
				"
				Farms Legais<br/><br/>
				1. Petroleo e oleo: 3200<br/>
				2. Cobre: 1500<br/>
				3. Metal: 3200<br/>
				4. Sal: 1450<br/>
				5. Cimento: 1950<br/>
				Farms Ilegais<br/><br/>
				1.Heroina: 3500<br/>
				2.Maconha: 2800<br/>
				3.Cocaina: 5000<br/>
				4.Diamante Ilegal: 6800<br/>
				5.Tartaruga: <br/><br/>
				A barra de ouro só é adquirida em assalto à reserva.<br/><br/>
				Barra de Ouro: 95000<br/><br/>
				NEWS: O MERCADO DO DIAMANTE ILEGAL ESTÁ EM ALTA. APROVEITEM!<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["serverrules",
		[
			"Levar vantagem",
				"
				Os uso dos artifícios abaixo são considerados “levar vantagem” e você será banido.<br/><br/>

				1. Proibido utilizar  Anti-VDM a recuperar a saúde total.<br/>
				2. Não será permitido, prayers usarem cheating, hacking, exploiting e ataques DDOS qualquer programa cheating.<br/>
				3. Bullying não e aceitavel em nosso servidor. <br/>
				4. Proibido assedio sexual.<br/>
				5. Proibido o combate log no jogo, em qualquer ponto onde você esteja no Role-Play.<br/><br/>
				"
		]
	];

	player createDiaryRecord["safezones",
		[
			"Safe Zones",
				"
					Se bombardear (bombardear pode ser explodir um veículo intencionalmente), roubar, ficar atropelando, ou matando nessas áreas, será punido com banimento.<br/><br/>

					Qualquer spawn de veículo (loja ou garagem)<br/>
					Todos batalhões policiais<br/>
					Postos avançados Rebeldes<br/>
					Lojas vip<br/><br/>
				"
		]
	];


	player createDiaryRecord ["serverrules",
		[
			"Ofensas que serão banidas",
				"
				Considere este seu primeiro e único aviso.<br/><br/>

				1. Matar sem chip.<br/>
				2. Matar sem aviso<br/>
				3. Descobrir bugs, e não avisar os adm.<br/>
				4. Atingir numero de kiks, de 1 mes ban permanente.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["serverrules",
		[
			"Interação Policial",
				"
				Itens nesta lista podem resultar em seu afastamento do servidor e/ou banimento, baseado nos critérios dos admins.<br/><br/>

				1. Em zonas seguras, e estritamente proibido, assaltos, assasinatos, e confrontos, Com excessão, de perseguições, caso o policial encontre, o Rebelde, em uma zona segura, não será permitido, o uso da força, terá que aborda, e prender, ( Rebelde não poderá reagir, caso reaja, será permitido o uso da força, mais será tomado medidas pela adiministração, para a punição do Rebelde, e para cops, caso não cumpram o padrão de abordagem).<br/>
				2. Será entendido como ordem de parada, qualquer viatura, com giroflex ligado, caso não pare, ou não demostre, reação, de que vá parar, será permitido o uso da força, para forçar a abordagem, Mesmo sendo civil, priorizando os pneus.<br/>
				3. Rebeldes, e policiais, poderão, se matar, caso veja o outro a vista, exceto, em safe zones,  o policial, será obrigado a aborda, caso o rebelde, esteja desarmado.<br/>
				4. E proibido, civis com armas civis, ou armas rebeldes (Sem roupa), atacar policiais, aleatoriamente, (Caso não tenha nada  a esconder, e atirar por que quer).<br/>
				5. Impedir propositalmente os policiais de realizar suas atividades será considerada infração e poderá ser preso. Ocorrendo de forma constante, resultará na sua remoção do servidor.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["serverrules",
		[
			"Botes",
				"
				Itens nesta lista poderá resultar na sua remoção do servidor e/ou banimento, baseado nos critérios dos admins.<br/><br/>

				1. Repetidamente empurrar botes sem permissão.<br/>
				2. Empurrar um bote com a intenção de machucar ou matar alguém. Isto não é Roleplay, é apenas uma falha na mecânica.<br/>
				3. Propositalmente atropelar nadadores/mergulhadores.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["serverrules",
		[
			"Aviação",
				"
				Itens nesta lista poderá resultar na sua remoção do servidor e/ou banimento, baseado nos critérios dos admins.<br/><br/>

				1. Propositalmente jogar um helicóptero em qualquer coisa. Outros helicópteros, veículos, construções, etc.<br/>
				2. Voar abaixo de 150m sobre a cidade constantemente. Mais do que ilegal, você corre o risco de colidir com a cidade, e indo assim contra as regras do servidor.<br/>
				3. Roubar helicóptero sem aviso adequado ou tempo significativo para o motorista trancá-lo. Se ele pousar e sair de perto sem trancar, é permitido. Se ele simplesmente sair do veículo e você entrar sem ter dado a chance de trancá-lo, é proibido.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["serverrules",
		[
			"Veículos",
				"
				Itens nesta lista poderá resultar na sua remoção do servidor e/ou banimento, baseado nos critérios dos admins.<br/><br/>

				1. Propositalmente atropelar outros jogadores. Sabemos que acidentes acontecem.<br/>
				2. Propositalmente se jogar na frente de veículos tentando prejudicar outros jogadores.<br/>
				3. Colidir com outros veículos tendo como objetivo causar uma explosão.<br/>
				4. Tentar entrar constantemente em veículos que não te pertencem com o objetivo de prejudicar o proprietário do veículo, não tentando o Roleplay.<br/>
				5. Roubar o veículo apenas para quebrá-lo ou destruí-lo de qualquer outra forma.<br/>
				6. Comprar diversos veículos com a intenção de fazer qualquer uma das coisas citadas acima.<br/>
				7. A única razão de atirar contra um veículo é para desabilitá-lo e/ou tiros de advertência no cenário Roleplay. Você não pode destruir deliberadamente veículos inimigos.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["serverrules",
		[
			"Regras de Comunicação",
				"
				Itens nesta lista poderá resultar na sua remoção do servidor e/ou banimento, baseado nos critérios dos admins.<br/><br/>

				1. Canal de lado não pode ser usado para tocar música ou qualquer outro tipo de micspam.<br/>
				2. Spam em qualquer canal de comunicaçãoresultará na sua remoção do servidor.<br/>
				4. Os canais do Teamspeak são divididos em áreas por uma razão. Policiais devem permanecer nos canais policiais todo o tempo.<br/><br/>
								"
		]
	];

	player createDiaryRecord ["serverrules",
		[
			" Anti roleplay (Anti-RP)",
				"
				Itens nesta lista poderá resultar na sua remoção do servidor e/ou banimento, baseado nos critérios dos admins.<br/><br/>

				1. Matar alguém sem motivo justificado no roleplay.<br/>
				2. Declarar uma rebelião não é motivo para alguém, até mesmo policiais.<br/>
				3. Policiais e Civis/Rebeldes só podem começar um tiroteio se tiverem razões relacionadas a algum crime.<br/>
				4. Se você morreu em fogo cruzado de um tiroteio, não é Anti roleplay.<br/>
				5. Matar alguém na tentativa de proteger a si mesmo ou terceiros não é Anti roleplay.<br/>
				6. Atirar em um jogador sem dar um tempo razoável para ele seguir suas ordens é considerado Anti roleplay.<br/><br/>

				Todos os casos serão julgados pelo admins. Baseados caso a caso.<br/><br/>
				"
		]
	];
	player createDiaryRecord ["serverrules",
		[
			"Regra da nova vida",
				"
				A regra da nova vida é aplicada para policiais e civis/rebeldes.<br/><br/>

				Itens nesta lista poderá resultar na sua remoção do servidor e/ou banimento, baseado nos critérios dos admins.<br/><br/>

				1. Se você morreu, deverá aguardar 15 minutos antes de voltar para o local da sua morte.<br/>
				2. Se você morreu para a polícia durante o roleplay, seus crimes passados serão perdoados, mas você não pode buscar por vingança.<br/><br/>
				"
		]
	];

// Police Section
	player createDiaryRecord ["policerules ",
		[
			"Negociação de Crises",
				"
				Negociação de crises devem ser conduzidas por um Sargento. Se nenhum sargento estiver disponível, a pessoa com a próxima patente mais alta deverá conduzir a situação.<br/><br/>
				"
		]
	];
	player createDiaryRecord ["policerules",
		[
			"A reserva Federal",
				"
				1. É ilegal a entrada de civis na Reserva Federal, a menos que eles tenham autorização. Se algum civil entrar sem a devida autorização, ele será escoltado para fora ou preso caso ele persista.
				2. Helicópteros sobrevoando a Reserva Federal serão solicitados a deixarem o local. No caso de recusa, serão abatidos.<br/>
				3. Se a Reserva Federal estiver sendo roubada, é recomendado que todos os policiais disponíveis dirijam-se até lá para evitar.<br/>
				4. Oficiais na proximidade devem se dirigir imediatamente para a Reserva Federal para ajudar.  Nearby officers should immediately head to the Federal Reserve to assist. Pequenos delitos podem ser descartados durante um assalto.<br/>
				5. Força letal pode ser utilizada nos assaltos a banco se não tiver outra alternativa disponível. Todas opções para eletrocutar e prender as pessoas devem ser feita primeiramente.<br/>
				6. Policiais não podem disparar cegamente no edifício.<br/>
				7. A polícia deve evacuar os civis do edifício durante um assalto.<br/>
				8. Qualquer civil que tentar bloquear intencionalmente a polica de entrar no edifício será tratado como um cúmplice.<br/>
				9. Oficiais de Supervisão pode contratar pessoas ou um grupo de pessoas para trabalhar como guardas de segurança para o banco. Veja a seção “Contratando” para mais informações.<br/><br/>
				"
		]
	];
	player createDiaryRecord ["policerules",
		[
			"Aviação",
				"
				1. Nenhum helicóptero pode pousar dentro dos limites das cidades sem autorização do oficial de patente mais alta online. (Exceções serão listadas abaixo.)<br/>
				Kavala: O heliponto do hospital (037129) ou das docas (031128).<br/>
				Athira: O campo de esportes (138185) ou atrás da loja de licenças (140188).<br/>
				Pyrgos: Os campos a Norte/Leste da loja de licenças (170127)<br/>
				Sofia: Em frente à loja de carro (258214) ou os campos a Sudeste da garagem (257212)<br/>
				Small towns: Um local apropriado deve ser escolhido. Isto será decidido pelos Oficiais em cada situação.<br/><br/>

				2. Helicópteros não podem pousar em estradas.<br/>
				3. Police may temporarily forbid landing at  but it cannot remain closed for a long period of time.<br/>
				4. Helicópteros não podem voar abaixo de 150m sobre a cidade sem autorização.<br/>
				5. Helicópteros não podem pairar sobre a cidade. Só pode pairar sobre a cidade se houver uma operação policial ativa acontecendo.<br/><br/>

				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Áreas Ilegais",
				"
				1. Áreas de gangues não são consideradas ilegais. Assim, um policial pore entrar sem estar em uma incursão, mas não pode restringir ou parar ninguém lá ddentro  sem um motivo provável/ atividade ilegal. (Falar com o NPC de gangue não é um motivo/atividade ilegal).<br/>
				2. Não entre em uma área ilegal, a menos que seja parte de uma incursão.<br/>
				3. Se você perseguir alguém em uma área ilegal, peça reforço.<br/>
				4. Em nenhuma circunstância é permitido um policial camperar qualquer área ilegal.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Patrulhando",
				"
				1. A policia deve patrulhar as estradas e cidades da ilha buscando por veículos abandonados e atividades criminosas.<br/>
				2. Patrulhas podem ser feitas a pé dentro da cidade ou em um veículo quando fora.<br/>
				3. Patrulhas não incluem áreas ilegais. Veja “Incursão/Camperar”.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Ponstos de Verificação",
				"
				Policiais podem montar pontos de verificação em áreas estratégicas para ajudar a combater as atividades ilegais e promover a segurança nas estradas.<br/><br/>

				1. Um ponto de verificação deve conter 3 ou mais policiais, utilizando 2 ou mais veículos. Um ATV não conta como um dos veículos necessários, mas ainda pode ser usado.<br/>
				2. Um ponto de verificação não pode ser montado a menos de 300m de uma área ilegal. Basicamente, você não pode montar um em cima de uma área ilegal.<br/>
				3. Pontos de verificação só podem ser montados em estradas, mas não pode ser em um cruzamento.<br/>
				4. Pontos de verificação não precisam ser marcados no mapa.<br/><br/>


				Procedimento adequado para o Ponto de Verificação:<br/>
				1. Peça para o motorista parar o veículo a uma distância segura e desligar o motor.<br/>
				2. Pergunte ao motorista e aos passageiros se eles possuem alguma arma.<br/>
				3. Peça ao motorista e aos passageiros para que desçam do veículo. Se eles tiverem armas, não os algeme imediatamente. Fale para baixarem suas armas e dê um tempo razoável para que façam.<br/>
				4. Pergunte para onde vão e de onde estão vindo.<br/>
				5. Peça para que deixem fazer uma revista.<br/>
				6. Se eles permitirem a revista, você deve algemá-los e fazer a revista.<br/>
				7. Se eles não permitirem, você deve deixálos ir, a menos que tenha uma causa provável.<br/>
				8. Após feito a revista, você deve permitir que eles voltem para o veículo e vão embora.<br/>
				9. No caso de encontrar alguma coisa ilegal, a pessoa deve ser multada ou presa, dependendo do crime.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Veículos",
				"
				1. Veículos no estacionamento ou razoavelmente estacionado em qualquer lugar, devem ser deixados lá.<br/>
				2. Veículos que pareçam abandonados, quebrados, sem motorista, podem ser apreendidos.<br/>
				3. Barcos devem ser razoavelmente estacionados na costa.<br/>
				4. Qualquer veículo que não se mova por um longo período de tempo devem ser apreendidos.<br/>
				5. Apreender é um trabalho essencial para um policial. Isto ajuda a manter o server limpo e diminuir os lags.<br/>
				6. Se está em dúvida, sempre verifique o veículo e mande uma mensagem para o dono antes de apreender.<br/>
				7. Lanchas da polícia ou Hunter com metralhadora podem ser usados para ajudar na apreensão de criminosos. As armas devem ser usadas para desabilitar o veículo e não para explodí-lo.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Excesso de Velocidade",
				"
				As seguintes velocidades são impostas pela polícia de Altis para garantir a segurança ansoluta dos cidadãos de Kavala e de todos os viajantes.<br/><br/>

				Dentro das grandes cidades:<br/>
				Ruas pequenas: 50km/h<br/>
				Ruas principais: 65km/h<br/>
				Fora das grandes cidades:<br/>
				Estrada pequenas: 80km/h<br/>
				Estradas principais: 110km/h<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Protocolos da Cidade",
				"
				1. Policiais podem patrulhar cidades grandes - Kavala, Athira, Pyrgos e Sofia.<br/>
				2. Policiais podem parar perto da loja de carros para se assegurarem de que não tem nenhum carro que precisa ser apreendido.<br/>
				3. Policiais não poderão ficar ou permanecer por muito tempo no centro das cidades.<br/>
				4. Policiais poderão entrar na cidade em grande número quando ocorrer um ato rebelde. Depois que a situação estiver sob controle, eles precisam deixar a cidade novamente.<br/>
				5. Lei marcial não pode ser declarada a qualquer momento.<br/>
				6. Os Batalhões de policia são de entrada ilegal para civis que não tenham autorização, entretanto, não é ilegal os civis permanecerem nas proximidades dos batalhões, a menos que estejam perturbando.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Prendendo e Multando",
				"
				A prisão deve ser realizada para criminosos que são considerados um perigo para si ou outrem.<br/><br/>

				1. Você não pode prender alguém se já lhe aplicou uma multa e esta foi paga.<br/>
				2. Você deve falar para o suspeito o motivo dele estar sendo preso, antes de prendê-lo.<br/>
				3. Se um civil é procurado, você deve prendê-lo. Não pode matá-lo, a menos que a situação se encaixe na seção de “Uso de força Letal”.<br/><br/>


				A multa é considerada um aviso para o civil. Se ele quebra uma lei, mas não representa uma ameaça para ninguém, você pode multá-lo.<br/><br/>

				1. Multas devem ter um preço razoável.<br/>
				2. Os preços das multas devem ser baseados nos crimes cometidos.<br/>
				3. A recusa do pagamento de uma multa, é um motivo legítimo para a prisão.<br/>
				4. Multar um civil com uma multa ilegal, como 100k por excesso de velocidade, etc., isto não é permitido e resultará na sua remoção da polícia.<br/><br/>

				Uma lista completa de todos os crimes e punições apropriadas deve ser passada para todos os policiais durante o treinamento. Se tiver dúvida ou não tiver sido treinado, pergunte ao policial de maior patente como deve agir.<br/><br/>

				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Armas",
				"
				Um policial nunca pode fornecer armamento para os civis. Esta atitude banirá você do servidor e será removido da whitelist.<br/><br/>

				Armas permitidas para porte de civis:<br/>
				1. P07<br/>
				2. Rook<br/>
				3. ACP-C2<br/>
				4. Zubr<br/>
				5. 4-five<br/>
				6. PDW2000<br/><br/>

				Qualquer outra arma [incluindo uma P07 silenciada Arma considerada da polícia)] é ilegal.<br/><br/>

				1. Não é permitido aos civis portar armas em mãos dentro do limite das cidades.<br/>
				2. Civis podem portar armas em mãos quando não estiverem nas cidades. No entanto, eles devem se submeter a uma pesquisa de licença quando solicitado por um policial, e devem baixar as armas (pressionando Ctrl duas vezes).<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Uso de força não-letal",
				"
				Até o momento, a P07 silenciada é a única forma de uso da força não-letal.<br/><br/>

				1. Taser deve ser utilizado para incapacitar civis desobedientes, com o intuito de algemá-los.<br/>
				2. Não descarregue seu taser, a menos que sua intenção seja incapacitar um civil. Descarregar seu taser de forma aleatória resultará em uma suspensão.<br/>
				3. Somente use seu taser de acordo com as regras e leis, nunca para impor suas vontades sobre os outros. <br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Incursão/Camperar ",
				"
				Incursão é definida como um esquadrão de polícia invadindo uma área de intensa atividade criminosa, tendo como objetivo parar os criminosos em atos ilegais.<br/><br/>

				1. A fim de invadir uma área, os policiais devem ter, pelo menos 4 policiais envolvidos, sendo um deles Sargento ou superior.<br/>
				2. Todos os civis na área invadida podem ser algemados e revistados. Se nenhum item ilegal for encontrado, você deve liberá-lo.<br/>
				3. Se itens ilegais forem encontrados durante a revista, você pode proceder com a prisão ou uma multa, como de costume.<br/>
				5. Força letal só é autorizada como descritas em “Uso da força letal”.<br/>
				6. Depois da área estar segura, os policiais devem deixar a área.<br/>
				7. An area cannot be raided again for 20 minutes after a previous raid.<br/>
				8. If the raid is a failure (All officers die), the 20 minute timer still applies to those officers.<br/>
				9. Backup may be called in, but it may not consist of fallen officers (see 'New Life Rule').<br/><br/>

				Camping is defined as the prolong stay of an officer in an area.<br/><br/>

				1. Checkpoints are not considered camping. See Checkpoint section for a definition of proper checkpoint procedures.<br/>
				2. See Bank Robbery and Agia Marina Protocol sections for more info on camping in the main town.<br/>
				3. Camping of illegal areas is staying longer than needed after a raid, or if officers do not conduct a raid but continue to watch and take action against civilians entering the area.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Cadeia de comando",
				"
				O policial de maior patente online está no comando da força policial, fora os admins online no momento. Ele deve seguir as regras e orientações da sua patente, e deve relatar para os admins casos onde alguma ação precise ser tomada.<br/><br/>

				Cadeia de comando da polícia:<br/>
				1. Coronel<br/>
				2. Tenente Coronel<br/>
				3. Major<br/>
				4. Capitão<br/>
				5. !º Tenente > 2º Tenente<br/>
				6. !º Sargento > 2º Sargento > 3º Sargento<br/>
				7. Cabo<br/>
				8. Soldado<br/><br/>

				Cops in game who are not enrolled/accepted into the SPD are the lowest tier and have no say in police operations.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Use of Lethal Force",
				"
				1. Use of Lethal force is only permitted for the protection of your life, another officers life, or a civilians life, if and only if non-lethal force would not be effective.<br/>
				2. Discharging of a weapon when not under threat or not during training exercises is not allowed. Officers caught in violation of this rule will be removed from the server and suspended from the SPD.<br/>
				3. Failure to follow proper weapons discipline and procedure will get you removed from the server and suspended from the SPD.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["policerules",
		[
			"Regras do Teamspeak",
				"
				1. Todos os policiais devem ter o Teamspeak e entrar no canal destinado à polícia.<br/>
				2. Por favor, entre no Teamspeak ANTES de entrar no jogo como policial.<br/><br/>
				"
		]
	];



// Illegal Items Section
	player createDiaryRecord ["illegalitems",
		[
			"Regras Rebeldes",
				"
				Rebelde é aquele que ingressa na resistência armada contra um governo (neste caso seria a polícia). In this case it would be the police. No entanto, devido à pequena quantidade de policial comparada com a grande possibilidade de rebeldes, não pode atacar a polícia sem um motivo.<br/><br/>
				1. Um Rebelde deve primeiramente montar uma gangue, e então declarar suas intenções.<br/>
				2. A resistência não é desculpa para Anti-roleplay (Veja Anti-roleplay nas regras gerais)<br/>
				3. O roleplay da Resistência deve ser conduzido de diferentes maneiras além de constantemente roubar a Reserva Federal ou atirar em policiais.<br/>
				4. A Resistência deve ser coordenada.<br/>
				5. Uma razão adequada deve estar por trás de cada um dos ataques.<br/><br/>
				"
		]
	];
	player createDiaryRecord ["illegalitems",
		[
			"Regras de Gangues",
				"
				1. Estar em uma gangue não é ilegal. Somente quando crimes ilegais são cometidos.<br/>
				2. Estar em uma gangue não é ilegal. Somente quando estiver participando de atividades ilegais.<br/>
				3. Gangues podem deter e controlar esconderijos de gangues. Outros grupos podem atacar um grupo que tenha controle para competir pelo controle de um esconderijo de gangue.<br/>
				4. Para declarar guerra contra outra gangue, o lider deve anunciá-la no global e todos os membros de ambas as gangues devem ser notificados. Para uma guerra de longo prazo, a declaração deverá ser feita no fórum.<br/>
				5. Gangues não podem matar civis desarmados, a menos que este faça parte de uma gangue rival e esteja em um território controlado pela sua gangue.<br/>
				6. Gangues não podem matar civis, a menos que estejam sob ameaça. Matar um civil desarmado porque ele não obedecer é considero Anti-roleplay, mas você pode machucar/causar dano.<br/><br/>
				"
		]
	];
	player createDiaryRecord ["illegalitems",
		[
			"Veículos ilegais",
				"
				Um civil no controle de um dos seguintes veículos proibidos está sujeito às consequências, tal como as definidas na lei de controle não autorizado de um veículo ilegal.<br/><br/>

				1. Ifrit<br/>
				2. Lancha<br/>
				3. Hunter<br/>
				4. Offroad (polícia/socorrista)<br/>
				"
		]
	];
	player createDiaryRecord ["illegalitems",
		[
			"Armamentos ilegais",
				"
				Um civil em posse dos seguintes armamentos está sujeito às consequências, tal como as definidas na lei de posse de arma de fogo ilegal.<br/><br/>

				1. MX Series<br/>
				2. Katiba Series<br/>
				3. TRG Series<br/>
				4. Mk.20 Series<br/>
				5. Mk.18 ABR<br/>
				6. Rifle SDAR<br/>
				7. Sting SMG<br/>
				8. P07 silenciada (Taser)<br/>
				9. Qualquer explosivo<br/><br/>
				"
		]
	];
	player createDiaryRecord ["illegalitems",
		[
			"Itens ilegais",
				"
				Os seguintes itens são de posse ilegal:<br/><br/>
				1. Tartaruga<br/>
				2. Cocaína<br/>
				3. Heroína<br/>
				4. Maconha<br/>
				5. Diamante não processado (depois da fronteira)<br/><br/>
				"
		]
	];


// Controls Section
	player createDiaryRecord ["Controles",
		[
			"Controles",
				"
				Y: Abre o menu do jogador<br/>
				U: Trancar e destrancar veículos e casas<br/>
				F: Sirene policial (Se policial)<br/>
				T: Inventário do veículo<br/>
				Shift esquerdo + B: Render-se<br/>
				Shift esquerdo + R: Algemar (Somente policial)<br/>
				Shift esquerdo + G: Coronhada / Atordoar (Utilizado para civis roubarem)<br/>
				Windows esquerdo: Tecla principal de interação. Usada para interagir com veículos/casas (reparar, etc) e para policiais interagir com civis.<br/>
				Windows esquerdo + T: Utilizado para pegar itens/dinheiro e apanhar.<br/>
				Shift esquerdo + L: Ativa as luzes de sirene da polícia e socorrista<br/>
				Shift esquerdo + H: Guarda sua arma<br/>
				Ctrl esquerdo + H: Retira sua arma<br/>
				"
		]
	];
