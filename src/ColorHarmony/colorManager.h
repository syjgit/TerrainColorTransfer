#pragma once
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <algorithm>
#include "Spline.h"
#define M_PI    3.14159265358979323846

struct huemapping
{
	cv::Mat x;
	cv::Mat y;

	huemapping()
	{
#pragma region y
		y = (cv::Mat_<double>(361, 1) <<
			0
			, 0.00277777777777778
			, 0.00555555555555556
			, 0.00833333333333333
			, 0.0111111111111111
			, 0.0138888888888889
			, 0.0166666666666667
			, 0.0194444444444444
			, 0.0222222222222222
			, 0.0250000000000000
			, 0.0277777777777778
			, 0.0305555555555556
			, 0.0333333333333333
			, 0.0361111111111111
			, 0.0388888888888889
			, 0.0416666666666667
			, 0.0444444444444444
			, 0.0472222222222222
			, 0.0500000000000000
			, 0.0527777777777778
			, 0.0555555555555556
			, 0.0583333333333333
			, 0.0611111111111111
			, 0.0638888888888889
			, 0.0666666666666667
			, 0.0694444444444445
			, 0.0722222222222222
			, 0.0750000000000000
			, 0.0777777777777778
			, 0.0805555555555556
			, 0.0833333333333333
			, 0.0861111111111111
			, 0.0888888888888889
			, 0.0916666666666667
			, 0.0944444444444444
			, 0.0972222222222222
			, 0.100000000000000
			, 0.102777777777778
			, 0.105555555555556
			, 0.108333333333333
			, 0.111111111111111
			, 0.113888888888889
			, 0.116666666666667
			, 0.119444444444444
			, 0.122222222222222
			, 0.125000000000000
			, 0.127777777777778
			, 0.130555555555556
			, 0.133333333333333
			, 0.136111111111111
			, 0.138888888888889
			, 0.141666666666667
			, 0.144444444444444
			, 0.147222222222222
			, 0.150000000000000
			, 0.152777777777778
			, 0.155555555555556
			, 0.158333333333333
			, 0.161111111111111
			, 0.163888888888889
			, 0.166666666666667
			, 0.169444444444444
			, 0.172222222222222
			, 0.175000000000000
			, 0.177777777777778
			, 0.180555555555556
			, 0.183333333333333
			, 0.186111111111111
			, 0.188888888888889
			, 0.191666666666667
			, 0.194444444444444
			, 0.197222222222222
			, 0.200000000000000
			, 0.202777777777778
			, 0.205555555555556
			, 0.208333333333333
			, 0.211111111111111
			, 0.213888888888889
			, 0.216666666666667
			, 0.219444444444444
			, 0.222222222222222
			, 0.225000000000000
			, 0.227777777777778
			, 0.230555555555556
			, 0.233333333333333
			, 0.236111111111111
			, 0.238888888888889
			, 0.241666666666667
			, 0.244444444444444
			, 0.247222222222222
			, 0.250000000000000
			, 0.252777777777778
			, 0.255555555555556
			, 0.258333333333333
			, 0.261111111111111
			, 0.263888888888889
			, 0.266666666666667
			, 0.269444444444444
			, 0.272222222222222
			, 0.275000000000000
			, 0.277777777777778
			, 0.280555555555556
			, 0.283333333333333
			, 0.286111111111111
			, 0.288888888888889
			, 0.291666666666667
			, 0.294444444444444
			, 0.297222222222222
			, 0.300000000000000
			, 0.302777777777778
			, 0.305555555555556
			, 0.308333333333333
			, 0.311111111111111
			, 0.313888888888889
			, 0.316666666666667
			, 0.319444444444444
			, 0.322222222222222
			, 0.325000000000000
			, 0.327777777777778
			, 0.330555555555556
			, 0.333333333333333
			, 0.336111111111111
			, 0.338888888888889
			, 0.341666666666667
			, 0.344444444444444
			, 0.347222222222222
			, 0.350000000000000
			, 0.352777777777778
			, 0.355555555555556
			, 0.358333333333333
			, 0.361111111111111
			, 0.363888888888889
			, 0.366666666666667
			, 0.369444444444444
			, 0.372222222222222
			, 0.375000000000000
			, 0.377777777777778
			, 0.380555555555556
			, 0.383333333333333
			, 0.386111111111111
			, 0.388888888888889
			, 0.391666666666667
			, 0.394444444444444
			, 0.397222222222222
			, 0.400000000000000
			, 0.402777777777778
			, 0.405555555555556
			, 0.408333333333333
			, 0.411111111111111
			, 0.413888888888889
			, 0.416666666666667
			, 0.419444444444444
			, 0.422222222222222
			, 0.425000000000000
			, 0.427777777777778
			, 0.430555555555556
			, 0.433333333333333
			, 0.436111111111111
			, 0.438888888888889
			, 0.441666666666667
			, 0.444444444444444
			, 0.447222222222222
			, 0.450000000000000
			, 0.452777777777778
			, 0.455555555555556
			, 0.458333333333333
			, 0.461111111111111
			, 0.463888888888889
			, 0.466666666666667
			, 0.469444444444444
			, 0.472222222222222
			, 0.475000000000000
			, 0.477777777777778
			, 0.480555555555556
			, 0.483333333333333
			, 0.486111111111111
			, 0.488888888888889
			, 0.491666666666667
			, 0.494444444444444
			, 0.497222222222222
			, 0.500000000000000
			, 0.502777777777778
			, 0.505555555555556
			, 0.508333333333333
			, 0.511111111111111
			, 0.513888888888889
			, 0.516666666666667
			, 0.519444444444445
			, 0.522222222222222
			, 0.525000000000000
			, 0.527777777777778
			, 0.530555555555556
			, 0.533333333333333
			, 0.536111111111111
			, 0.538888888888889
			, 0.541666666666667
			, 0.544444444444444
			, 0.547222222222222
			, 0.550000000000000
			, 0.552777777777778
			, 0.555555555555556
			, 0.558333333333333
			, 0.561111111111111
			, 0.563888888888889
			, 0.566666666666667
			, 0.569444444444444
			, 0.572222222222222
			, 0.575000000000000
			, 0.577777777777778
			, 0.580555555555556
			, 0.583333333333333
			, 0.586111111111111
			, 0.588888888888889
			, 0.591666666666667
			, 0.594444444444444
			, 0.597222222222222
			, 0.600000000000000
			, 0.602777777777778
			, 0.605555555555556
			, 0.608333333333333
			, 0.611111111111111
			, 0.613888888888889
			, 0.616666666666667
			, 0.619444444444445
			, 0.622222222222222
			, 0.625000000000000
			, 0.627777777777778
			, 0.630555555555556
			, 0.633333333333333
			, 0.636111111111111
			, 0.638888888888889
			, 0.641666666666667
			, 0.644444444444445
			, 0.647222222222222
			, 0.650000000000000
			, 0.652777777777778
			, 0.655555555555556
			, 0.658333333333333
			, 0.661111111111111
			, 0.663888888888889
			, 0.666666666666667
			, 0.669444444444444
			, 0.672222222222222
			, 0.675000000000000
			, 0.677777777777778
			, 0.680555555555556
			, 0.683333333333333
			, 0.686111111111111
			, 0.688888888888889
			, 0.691666666666667
			, 0.694444444444444
			, 0.697222222222222
			, 0.700000000000000
			, 0.702777777777778
			, 0.705555555555556
			, 0.708333333333333
			, 0.711111111111111
			, 0.713888888888889
			, 0.716666666666667
			, 0.719444444444444
			, 0.722222222222222
			, 0.725000000000000
			, 0.727777777777778
			, 0.730555555555556
			, 0.733333333333333
			, 0.736111111111111
			, 0.738888888888889
			, 0.741666666666667
			, 0.744444444444445
			, 0.747222222222222
			, 0.750000000000000
			, 0.752777777777778
			, 0.755555555555556
			, 0.758333333333333
			, 0.761111111111111
			, 0.763888888888889
			, 0.766666666666667
			, 0.769444444444445
			, 0.772222222222222
			, 0.775000000000000
			, 0.777777777777778
			, 0.780555555555556
			, 0.783333333333333
			, 0.786111111111111
			, 0.788888888888889
			, 0.791666666666667
			, 0.794444444444444
			, 0.797222222222222
			, 0.800000000000000
			, 0.802777777777778
			, 0.805555555555556
			, 0.808333333333333
			, 0.811111111111111
			, 0.813888888888889
			, 0.816666666666667
			, 0.819444444444444
			, 0.822222222222222
			, 0.825000000000000
			, 0.827777777777778
			, 0.830555555555556
			, 0.833333333333333
			, 0.836111111111111
			, 0.838888888888889
			, 0.841666666666667
			, 0.844444444444444
			, 0.847222222222222
			, 0.850000000000000
			, 0.852777777777778
			, 0.855555555555556
			, 0.858333333333333
			, 0.861111111111111
			, 0.863888888888889
			, 0.866666666666667
			, 0.869444444444445
			, 0.872222222222222
			, 0.875000000000000
			, 0.877777777777778
			, 0.880555555555556
			, 0.883333333333333
			, 0.886111111111111
			, 0.888888888888889
			, 0.891666666666667
			, 0.894444444444445
			, 0.897222222222222
			, 0.900000000000000
			, 0.902777777777778
			, 0.905555555555556
			, 0.908333333333333
			, 0.911111111111111
			, 0.913888888888889
			, 0.916666666666667
			, 0.919444444444444
			, 0.922222222222222
			, 0.925000000000000
			, 0.927777777777778
			, 0.930555555555556
			, 0.933333333333333
			, 0.936111111111111
			, 0.938888888888889
			, 0.941666666666667
			, 0.944444444444444
			, 0.947222222222222
			, 0.950000000000000
			, 0.952777777777778
			, 0.955555555555556
			, 0.958333333333333
			, 0.961111111111111
			, 0.963888888888889
			, 0.966666666666667
			, 0.969444444444444
			, 0.972222222222222
			, 0.975000000000000
			, 0.977777777777778
			, 0.980555555555556
			, 0.983333333333333
			, 0.986111111111111
			, 0.988888888888889
			, 0.991666666666667
			, 0.994444444444445
			, 0.997222222222222
			, 1
			);
#pragma endregion y

#pragma region x
		x = (cv::Mat_<double>(361, 1) <<
			-1.19226925484350e-05
			, 0.00145413998569713
			, 0.00292368103955782
			, 0.00465383951935469
			, 0.00633149721551531
			, 0.00805676485763546
			, 0.00961127656694583
			, 0.0111442750705238
			, 0.0129921134167831
			, 0.0147026431359552
			, 0.0162752670669493
			, 0.0184965702655878
			, 0.0198703957157245
			, 0.0199596230732300
			, 0.0231834565258246
			, 0.0254375955186547
			, 0.0261749677264650
			, 0.0262191255009541
			, 0.0289125283106280
			, 0.0304010515211315
			, 0.0320969464820985
			, 0.0335561887476955
			, 0.0351800001907099
			, 0.0366216071004045
			, 0.0379307455066301
			, 0.0398243647948438
			, 0.0407990850695850
			, 0.0425132759104540
			, 0.0430737497335454
			, 0.0451178497229040
			, 0.0472888930234669
			, 0.0487142513424143
			, 0.0504482835863926
			, 0.0522163602155198
			, 0.0540835652218742
			, 0.0543148173269002
			, 0.0572072355684610
			, 0.0587243685642557
			, 0.0599075869812235
			, 0.0617927323469862
			, 0.0635696714526303
			, 0.0651897433668618
			, 0.0666915504475935
			, 0.0686622217150451
			, 0.0704042267010161
			, 0.0718500386622105
			, 0.0727241476984418
			, 0.0748407920917606
			, 0.0752545632864261
			, 0.0787849676557141
			, 0.0806638807802735
			, 0.0819371474542531
			, 0.0823549449966664
			, 0.0859073138652889
			, 0.0871830922479528
			, 0.0888165955244367
			, 0.0904369254375679
			, 0.0923766342901746
			, 0.0937188529118175
			, 0.0953581027179583
			, 0.0969267455549689
			, 0.0980481709078057
			, 0.0990585398883255
			, 0.0995529688187573
			, 0.100221073123739
			, 0.102143840818649
			, 0.103447773736187
			, 0.104590417987885
			, 0.105542519167546
			, 0.106985865922833
			, 0.107623711014550
			, 0.109760696239688
			, 0.107731046121086
			, 0.108020010089442
			, 0.110665095547120
			, 0.113964647822629
			, 0.114573577145870
			, 0.115882075580559
			, 0.116717282963292
			, 0.118139390910610
			, 0.118402796555251
			, 0.120321286806766
			, 0.121163075640332
			, 0.122196009707925
			, 0.123476145188013
			, 0.124279239996369
			, 0.125729799106625
			, 0.126958124479642
			, 0.127990713001951
			, 0.128731889519739
			, 0.129982378163988
			, 0.131285411399248
			, 0.132212663322641
			, 0.132926842103074
			, 0.134798482727780
			, 0.136601483360259
			, 0.137094708706998
			, 0.137837844524221
			, 0.138550619190213
			, 0.140462775584891
			, 0.141448461058636
			, 0.142169696081712
			, 0.143460977105949
			, 0.144719762036131
			, 0.145509630541888
			, 0.146877548182482
			, 0.148117781595822
			, 0.149361681976794
			, 0.149556087502864
			, 0.151271860501837
			, 0.152144710930206
			, 0.153620413202861
			, 0.154380672724302
			, 0.155686630502661
			, 0.156891883324329
			, 0.157733939127158
			, 0.158832408178702
			, 0.160006002862297
			, 0.160816380457181
			, 0.164157014721284
			, 0.162379265201214
			, 0.164854916477402
			, 0.170839259641103
			, 0.174111307429926
			, 0.177499309656023
			, 0.181139919134488
			, 0.184746604397414
			, 0.187801568708421
			, 0.191598906054979
			, 0.195324228949355
			, 0.198887943578879
			, 0.202356165412804
			, 0.205815907787906
			, 0.209434163431039
			, 0.213014986068136
			, 0.216463565469349
			, 0.220435622233638
			, 0.224329748419958
			, 0.228208484440594
			, 0.232123013737781
			, 0.236037983949758
			, 0.239914704092980
			, 0.243812166837060
			, 0.247585241838061
			, 0.251386382990628
			, 0.255455678109343
			, 0.259319627333976
			, 0.263235346549149
			, 0.267140736392986
			, 0.271019289841263
			, 0.274938372515681
			, 0.278781750051948
			, 0.282725561730694
			, 0.286596464356395
			, 0.290492147019294
			, 0.294392632563750
			, 0.298237384261814
			, 0.302143638869365
			, 0.306044184375708
			, 0.309922348384677
			, 0.313794456950660
			, 0.317712623742257
			, 0.321612681259840
			, 0.325475709481135
			, 0.329377636209467
			, 0.332716401269134
			, 0.336413420141059
			, 0.339551552195787
			, 0.342696956469522
			, 0.345864518046544
			, 0.348939700887178
			, 0.352042604104637
			, 0.355279590783905
			, 0.358378870860848
			, 0.361566040870482
			, 0.364702999445152
			, 0.367875019409899
			, 0.371024493208851
			, 0.374148047514020
			, 0.377337112339093
			, 0.380552574653507
			, 0.383743756865603
			, 0.386963424995831
			, 0.390125478737427
			, 0.393279999972998
			, 0.396435111609849
			, 0.399590520289301
			, 0.402753229090880
			, 0.405874597653841
			, 0.409102091559857
			, 0.412149807706007
			, 0.415446701247466
			, 0.418614186558530
			, 0.421585835216405
			, 0.424684164932070
			, 0.427971678796487
			, 0.431101061592680
			, 0.434063742601714
			, 0.437242950529659
			, 0.440578163921142
			, 0.443806303973556
			, 0.446840460921797
			, 0.449904904202924
			, 0.453108802120184
			, 0.456276892703352
			, 0.459253892213481
			, 0.462441532832926
			, 0.465521622906631
			, 0.468631378824350
			, 0.471766384721866
			, 0.474922006685296
			, 0.478030083572386
			, 0.481072800288973
			, 0.484253034613802
			, 0.487170813081382
			, 0.490179692303696
			, 0.493348262577491
			, 0.496396093691521
			, 0.499865710283733
			, 0.502616153336830
			, 0.505839273219509
			, 0.508600783605870
			, 0.511729062157266
			, 0.514849912035088
			, 0.517964680649848
			, 0.521013311532857
			, 0.524016102723949
			, 0.526923850241253
			, 0.529804786933948
			, 0.533197054981477
			, 0.536554439450014
			, 0.538889900379191
			, 0.542348565646159
			, 0.545294452501706
			, 0.548444052616848
			, 0.551532848348831
			, 0.554804638937110
			, 0.557673173045950
			, 0.560679104842160
			, 0.563794207648704
			, 0.566673348096116
			, 0.569589048266147
			, 0.572353636106780
			, 0.575164473108737
			, 0.578299960067811
			, 0.581015463892647
			, 0.584124099589846
			, 0.587024086031525
			, 0.589877858855330
			, 0.592701003170938
			, 0.595343397978029
			, 0.598547767640421
			, 0.601318680733036
			, 0.604086070967420
			, 0.607041652797618
			, 0.610012290883298
			, 0.612839999259855
			, 0.615628896516066
			, 0.618710127712321
			, 0.621278727752203
			, 0.624463761498824
			, 0.627117178092177
			, 0.630024553438948
			, 0.632910804177417
			, 0.635699223189036
			, 0.638628476569411
			, 0.641745506766303
			, 0.644260767445870
			, 0.647357276007555
			, 0.650352660309529
			, 0.653445670247994
			, 0.656101347933920
			, 0.658766570397376
			, 0.661470978747961
			, 0.665037510714037
			, 0.669674906331615
			, 0.669975789979278
			, 0.673746356154866
			, 0.676649847157617
			, 0.679572514245116
			, 0.682452496656128
			, 0.685456045864236
			, 0.688409076303721
			, 0.691408461939830
			, 0.694409548290319
			, 0.697265482962390
			, 0.700280289923360
			, 0.703389627176496
			, 0.706618166334411
			, 0.709374422961252
			, 0.712093152803970
			, 0.715195018196250
			, 0.718864264144886
			, 0.721431817260044
			, 0.724163111545582
			, 0.726900468426463
			, 0.730091880231713
			, 0.732951057304585
			, 0.736515770301424
			, 0.738736625662014
			, 0.742030752486652
			, 0.745169300375408
			, 0.748480571095671
			, 0.751807168404309
			, 0.754964847438351
			, 0.757755776431412
			, 0.760296245984838
			, 0.763470148376982
			, 0.766428119356723
			, 0.769513360773064
			, 0.772579494210817
			, 0.775562382218399
			, 0.779013837491659
			, 0.781958917870053
			, 0.784666838423778
			, 0.787710067584646
			, 0.790853050652165
			, 0.793888777628576
			, 0.796889894381067
			, 0.799851893851919
			, 0.802919232702018
			, 0.805972593967717
			, 0.808995950016817
			, 0.812028036064557
			, 0.815137057168356
			, 0.818209209488146
			, 0.821264108378017
			, 0.824364623440125
			, 0.827285408928093
			, 0.830384928499288
			, 0.834089381206249
			, 0.838918033941166
			, 0.844497919179811
			, 0.850071903956287
			, 0.855657692183519
			, 0.861139661049591
			, 0.866715246323799
			, 0.872277086587092
			, 0.877824211750574
			, 0.883373887542654
			, 0.888948625398004
			, 0.894504868458609
			, 0.900065337269127
			, 0.905594507042562
			, 0.911158218104828
			, 0.916761734903866
			, 0.923132876380423
			, 0.927857105405751
			, 0.933609782332609
			, 0.939046699801908
			, 0.944698216944855
			, 0.950055975014673
			, 0.955696863832249
			, 0.961081097041936
			, 0.967207897684099
			, 0.972764755691301
			, 0.977689995399239
			, 0.983767386352256
			, 0.989459773021895
			, 0.994519809694748
			, 1.00000632398819
			);
#pragma endregion x
	}

};



class Fppval
{
public:
	static void ppval(huemapping map, cv::Mat & hsvRemap)
	{
		int length = map.x.cols;
		double *x0 = map.x.ptr<double>(0);
		double *y0 = map.y.ptr<double>(0);

		

		int length2 = hsvRemap.cols;
		double *x = hsvRemap.ptr<double>(0);;
		double *y = new double[length2];
		

		double leftBound = 0, RightBound = 1.0;    //边界导数

		try
		{
			SplineSpace::Spline sp(x0, y0, 361, SplineSpace::GivenSecondOrder, leftBound, RightBound);
			sp.MultiPointInterp(x, length2, y);

			for (int i = 0; i < length2; i++, y++)
				hsvRemap.at<double>(0, i) = *y;
		}
		catch (SplineSpace::SplineFailure sf)
		{

		}

		/*delete[] x0;
		x0 = NULL;

		delete[] y0;
		y0 = NULL;

		delete[] x;
		x = NULL;

		delete[] y;
		y = NULL;*/
	}
};



class color_manager
{
private:
	static cv::Mat Cos(cv::Mat m)
	{
		cv::Mat t(m.size(), CV_64F);

		for (int i = 0; i < m.rows; i++) {
			double *ptr1 = m.ptr<double>(i);
			double *ptr2 = t.ptr<double>(i);
			for (int j = 0; j < m.cols*m.channels(); j++)
				ptr2[j] = cos(ptr1[j]);
		}
		return t;
	}


	static cv::Mat Sin(cv::Mat m)
	{
		cv::Mat t(m.size(), CV_64F);

		for (int i = 0; i < m.rows; i++) {
			double *ptr1 = m.ptr<double>(i);
			double *ptr2 = t.ptr<double>(i);
			for (int j = 0; j < m.cols*m.channels(); j++)
				ptr2[j] = sin(ptr1[j]);
		}

		return t;
	}

	static cv::Mat negate(cv::Mat&input)
	{
		cv::Mat result= input.clone();
		for (int i = 0; i<input.rows; i++)
		{
			double* pData1 = result.ptr<double>(i);
			for (int j = 0; j<input.cols; j++)
			{
				if (pData1[j] == 1)
					pData1[j] = 0.0;
				else if (pData1[j] == 0)
					pData1[j] = 1.0;
			}
		}
		return result;
	}

	static cv::Mat judge(const cv::Mat&input,const double & value,int type=1)
	{
		cv::Mat result = input.clone();
		for (int i = 0; i<input.rows; i++)
		{
			double* pData1 = result.ptr<double>(i);
			for (int j = 0; j<input.cols; j++)
			{
				if (type == 1)
				{
					if (pData1[j] > value)
						pData1[j] = 1;
					else
						pData1[j] = 0;
				}				
				else
				{
					if (pData1[j] < value)
						pData1[j] = 1;
					else
						pData1[j] = 0;
				}
			}
		}
		return result;
	}

public:

	

	static cv::Mat RGB2HSV(const cv::Mat& input)
	{
		cv::Mat rgb = input * 255;

		cv::Mat hsbH, hsbS, hsbV;
		hsbH = cv::Mat::zeros(1, rgb.cols, CV_64F);
		hsbS = cv::Mat::zeros(1, rgb.cols, CV_64F);
		hsbV = cv::Mat::zeros(1, rgb.cols, CV_64F);
		cv::Mat rgbR= rgb.row(0), rgbG = rgb.row(1), rgbV = rgb.row(2);

		cv::Mat _min = min(min(rgbR, rgbG), rgbV);
		cv::Mat _max = max(max(rgbR, rgbG), rgbV);
		cv::Mat del_Max = _max - _min;


		hsbV = _max / 255.0 * 100;
		hsbS = (del_Max / _max) * 100;


		for (int i = 0; i < rgb.cols; i++)
		{
			if (_max.at<double>(0,i) == rgbR.at<double>(0, i) && rgbG.at<double>(0, i) >= rgbV.at<double>(0, i))
			{
				hsbH.at<double>(0, i) = (rgbG.at<double>(0,i) - rgbV.at<double>(0,i)) * 60.0 / (_max.at<double>(0,i) - _min.at<double>(0,i)) + 0;
			}
			else if (_max.at<double>(0,i) == rgbR.at<double>(0,i) && rgbG.at<double>(0,i) < rgbV.at<double>(0,i))
			{
				hsbH.at<double>(0,i) = (rgbG.at<double>(0,i) - rgbV.at<double>(0,i)) * 60.0 / (_max.at<double>(0,i) - _min.at<double>(0,i)) + 360;
			}
			else if (_max.at<double>(0,i) == rgbG.at<double>(0,i))
			{
				hsbH.at<double>(0,i) = (rgbV.at<double>(0,i) - rgbR.at<double>(0,i)) * 60.0 / (_max.at<double>(0,i) - _min.at<double>(0,i)) + 120;
			}
			else if (_max.at<double>(0,i) == rgbV.at<double>(0,i))
			{
				hsbH.at<double>(0,i) = (rgbR.at<double>(0,i) - rgbG.at<double>(0,i)) * 60.0 / (_max.at<double>(0,i) - _min.at<double>(0,i)) + 240;
			}
		}

		//四舍五入
		cv::Mat hsv(3, rgb.cols, CV_64F);
		hsv.row(0) = min(360.0, max(0.0, hsbH)) / 360;
		hsv.row(1) = min(100.0, max(0.0, hsbS)) / 100;
		hsv.row(2) = min(100.0, max(0.0, hsbV)) / 100;

		return hsv;
	}

	static cv::Mat RGB2Lab(const cv::Mat& rgbs)
	{
		cv::Mat result = rgbs.clone();



		double T = 0.008856;


		cv::Mat MAT=(cv::Mat_<double>(3, 3) << 
			0.412453, 0.357580, 0.180423,
			0.212671, 0.715160, 0.072169,
			0.019334, 0.119193, 0.950227
		);

		cv::Mat  XYZ = MAT*(rgbs);

		cv::Mat X = XYZ.row(0) / 0.950456;
		cv::Mat Y = XYZ.row(1);
		cv::Mat Z = XYZ.row(2) / 1.088754;


		cv::Mat XT = judge(X, T);
		cv::Mat YT = judge(Y, T);
		cv::Mat ZT = judge(Z, T);


		cv::Mat xxx,zzz;
		cv::pow(X, 1.0 / 3.0, xxx);
		cv::pow(Z, 1.0 / 3.0, zzz);

		cv::Mat fX = (XT.mul(xxx)) + negate(XT).mul(X*7.787 + 16.0 / 116.0);

		cv::Mat Y3;
		cv::pow(Y, 1.0 / 3.0, Y3);

		cv::Mat fY = YT.mul(Y3) + negate(YT).mul(Y*7.787 + 16.0 / 116.0);
		cv::Mat L = YT.mul(Y3*116.0 - 16.0) + negate(YT).mul(Y*903.3);

		cv::Mat fZ = (ZT.mul(zzz)) + negate(ZT).mul (Z * 7.787 + 16.0 / 116.0);

		cv::Mat a = (fX - fY) * 500.0;
		cv::Mat b = (fY - fZ) * 200.0;


		result.row(0) = L / 100.0;
		result.row(1) = a / 128.0;
		result.row(2) = b / 128.0;

		return result;
	}


	static cv::Mat RGB2CHSV(const cv::Mat& rgb)
	{
		cv::Mat data(3, rgb.cols, CV_64F);;

		cv::Mat hsv = RGB2HSV(rgb);

		cv::Mat v1, v2, v3;
		v1 = hsv.row(0);
		v2 = hsv.row(1);
		v3 = hsv.row(2);

		try
		{
			huemapping hueMaping;


			Fppval::ppval(hueMaping, v1);
		}
		catch (SplineSpace::SplineFailure sf)
		{

		}
	
		data.row(0)= v2.mul(Cos(v1 * 2.0 * M_PI));
		data.row(1) = v2.mul(Sin(v1 * 2.0 * M_PI)*-1); //chsv_2
		v3.copyTo(data.row(2));

		return data;
	}
};