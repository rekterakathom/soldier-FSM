class CfgFunctions
{
	class SFSM
	{
		class CQB
		{
           file = "\soldierFSM\functions\CQB";
		   class assignAllBuildings    {};
		   class assignBuilding        {};
		   class currentBuilding       {};
		   class unitIndoorPos         {};
		   class floorPositions        {};
		   class buildingFloors        {};
		   class unitsInBuilding       {};
		   class CQBlimitReached       {};
		   class initCQB               {};
		   class buildingPath          {};
		   class buildingExits         {};
		   class CQBTargetEnemies      {};
		   class clearCQBPos           {};
		   class clearBuilding         {};
		   class CQBposAvailable       {};
		   class CQBcoverPosFilter     {};
		   class moveIntoHouseInit     {};
		   class moveIntoHouseExec     {};
		   class endMoveIntoHouse      {};
		   class houseAvailable        {};
		   class nearestAvailableHouse {};
		   class endCQBclearing        {};
		};
		
		class misc
		{
			
			file = "\soldierFSM\functions\misc";
			class StoreSuppression		{};
			class onSuppression			{};
			class Roll					{};
			class unitData				{};
			class sinCosPos				{};
			
			class initReaction			{};
			class groupData				{};
			class manAvailable          {};
			class forceMoveToPos		{};
			class manLoaded             {};
			class unitInDoor            {};
			class isRealMan             {};
			class targetVisible         {};
			class allCurrentDestinations{};
			class manOverrunBy          {};
			class firePosLite           {};
			class killNearEnemies       {};
			
			class loadedAddons          {};
			class unitsInRangeSameSide  {};
			class getNearestOrPlayer    {};
			class relAimPos             {};
			class objectsInPath         {};
			class forceMove2            {};
			class calculatePath         {};

			class canSprint             {};
			class sprint                {};
			class sprintInit            {};
			class sprintLooper          {};
			class sprintVarRemoval      {};

			class isPosition            {};
			class availableRegulars     {};


		};

        class vehicles
		{
            file = "\soldierFSM\functions\vehicles";
			class vehicleData           {};
			class vehicleHeard          {};
			class availableVehicles     {};
			class vehicleAvailable      {};
			class UnitsNearVehicles     {};
			class endGetInVehicle       {};
			class otherSideInVehicle    {};
			class initGetInVehicle      {};
			class hijackAllVehicles     {};
			class hijackVehicle         {};
			class getInVehicle          {};
			class vehicleNeedsCrew      {};
			class reinforceVehicles     {};
			class vehicleActions        {};
			class enableHijack          {};
			class disableHijack         {};

		};


		class taskManagement
		{
			file = "\soldierFSM\functions\taskManagement";
			class HandleSuppression 	{};
			class TaskManager           {};
			class tenSecondTasks		{};
			class unitTasks				{};
			class vehicleTasks          {};
			class updateVehicle         {};
			class groupTasks			{};
			class handleGroupStance     {};
			class deleteDeadData        {};
			
		};

		class projectileHandling
		{
			file = "\soldierFSM\functions\projectileHandling";
			class soundReaction         {};
			class reactToExplosion      {};
			class addCrater             {};
			class handleBulletImpact    {};
			class handleExplosion       {};
			class handleGrenade         {};
			class throwBackGrenade      {};
			class evadeGrenade          {};
		};

		class curator
		{
			file = "\soldierFSM\functions\curator";
			class zWPplaced             {};
			class zWPdeleted            {};
		};
		
		class eventHandlers
		{
			file = "\soldierFSM\functions\eventHandlers";
			class SuppressedEH			{};
			class hitEH					{};
			class firedEH				{};
			class endHealEH				{};
			class curatorEH             {};
			class spottedCustomEH		{};
			class enemySpotted          {};
			class unitKilled            {};
			class unitCreated           {};

			class projectileCreated     {};
			class projectileEH			{};
			class explosionEH			{};
			class bulletEH			    {};

			class vehicleFiredEh        {};
			class enemyDetected			{};
			class gameLoaded            {preInit = 1};
			class gameLoadedWarning     {};
			class putAnimDoneEH         {};
			class PathCalculated        {};
			
		};

		class explosives 
		{
			file = "\soldierFSM\functions\explosives" 
			class canBlowUpHouse        {};
			class carriedExplosives     {};
			class formatExplosiveName   {};
			class getChargeFromBackPack {};
			class initHouseDemolition   {};
			class placeExplosive        {};
			class blowUpHouse           {};
		}

		class launchers
		{
			file = "\soldierFSM\functions\launchers" 
			class rpgHouse          {};
			class launcherHandler   {};
			class forceFireLauncher {};
			class canRpgHouse       {};
			class steerMissile      {};
			class guideMissile      {};
		}

		class dodging
		{
			file = "\soldierFSM\functions\dodging";
			class dodgeEnded			{};
			class EndDodge				{};
			class Dodge					{};
			class GetDodgePos			{};
			class canDodge				{};
			class getLateralPos			{};
			class groupCanDodge         {};
			class forceCoverDodge       {};
			
			
		};
		
		class flinching 
		{
			file = "\soldierFSM\functions\flinching";
			class canFlinch				{};
			class endFlinch				{};
			class flinch 				{};
			class bigBulletFlinch		{};
			class standardFlinch		{};
			class execStandardFlinch	{};
			class normalizeStance		{};
			class bigFlinchCover        {};
			
		};

		class reactiveFire
		{
			file = "\soldierFSM\functions\reactiveFire";
			class canReactFire			{};
			class reactFire				{};
			class endReactiveFire		{};
			class directReactFire		{};
			class unitTounitForcedFire	{};
			class unitAimedAtTarget		{};
			class unitWeaponDir			{};
			class multiplyReactionFire	{};
		};

		class rearming
		{
			file = "\soldierFSM\functions\rearming";
			class rearm            {};
			class canRearm         {};
			class needMachinegun   {};
			class canRearmWeapon   {};
			class getNewWeapon     {};
			class validRearm       {};
			class rearmAtSupply    {};
			class endRearm         {};
			class hasMagsForWeapon {};
			class getBestSupply    {};
			class primaryWeaponMags{};
			class pickUpFreshAT    {};
		};

        class startEngagement
        {
            file = "\soldierFSM\functions\startEngagement";
            class AtSpecialistInitFight  {};
            class targetInfWithLauncher  {};
            class reactTovehicles        {};
            class unkillableEnemyVehicle {};
            class eyelidTrench           {};
            class getEnemyVehicles       {};
            class specialInitFightActions{};
            class machineGunInitFight    {};
            class supressPositions       {};
			class moveToFirePos          {};
			class findFirePos            {};
        };

        class startEngagement_takeCover
        {
            file = "\soldierFSM\functions\startEngagement\takeCover";
            class getCoverPos            {};
            class fightInitCover         {};
            class takeCover              {};
            class endTakeCover           {};
            class selectCoverPos         {};
            class postCoverActions       {};
            class initTakeCover          {};
            class stayInCover            {};
            class endStayInCover         {};
            class eventTriggeredCover    {};
        };

        class startEngagement_hide
		{
            file = "\soldierFSM\functions\startEngagement\hide";
            class findHidePos            {};
            class hideFromVehicle        {};
            class initHideFromVeh        {};
            class moveToHidePos          {};
            class doHide                 {};
            class doHideCQB              {};
            class execHiding             {};
        };

		class init
		{
			file = "\soldierFSM\functions\init";
			class serverInit			{};
			class initSettings			{};
			class postConfig			{};
			class initClient			{};
			class initSFSM				{postInit = 1};
			class InitMan				{};
			class initGroup             {};
			class initVehicle           {};
		};

		class debug
		{
			file = "\soldierFSM\functions\debug";
			class 3dDebug				{};
			class 3DdebugText			{};
			class actionColor			{};
			class drawObjectMarker      {};
			class multiple3dmarkers     {};
			class battlefield3d			{};
			class man3dInfo             {};
			class debugMessage			{};
			class hunkerObj3d			{};
			class manInfo               {};
			class logSettings           {};
			class deleteWarning         {};
			class custom3Dmarkers       {};

			class flashAction           {};
		};
		
		class healing
		{
			file = "\soldierFSM\functions\healing";
			class proneHeal				{};
			class endSelfHeal			{};
			class canSelfHeal			{};
			class hasMedkit             {};
			class nearestHealer         {};
			class initBuddyHeal         {};
			class canBuddyHeal          {};
			class buddyHeal             {};
			class endBuddyHeal          {};
			class reviveAnim            {};
			class buddyRevive           {};
			class endBuddyRevive        {};
			class initDragMan           {};
			class dragStatus            {};
			class drag                  {};
			class dragMan               {};
			class endDragMan            {};
			class dragPos               {};
			class searchAndRevive       {};
		};
		class battlefield
		{
			file = "\soldierFSM\functions\battlefield";
			class InitBattlefield		  {};
			class battlefieldPostInit	  {};
			class battlefieldEnd		  {};
			class getZones				  {};
			class getZone				  {};
			class getCoverPositionsLight  {};
			class clusterCoverPosLight    {};
			class battlefieldRadius       {};
			class nearestBattle			  {};
			class battleInitType          {};
			class battlefieldVariables    {};
			class updateBattlefield       {};
			class sidesFromString         {};
			class battlingUnits           {};
			class battleEnded             {};
			class battleFieldUpdater      {};
			class triggerBattleOnShot	  {};
			class canTriggerBattleShot	  {};
			class canSpotInitBattle       {};
			class excludeCpos  			  {};
			class getBattlefield		  {};
			class getEnemyPositions		  {};
			class updateHunkerObjects	  {};
			class initGrid                {};
			class updateGrid              {};
			class AddWeaponsToBattlefield {};
			class emergencyRearm          {};
			class getBattlefieldWeapon    {};
			class pickUpWeapon            {};
			class canPickUpWeapon         {};
			class endWeaponPickup         {};
			class useLightScan            {};
			class battleFieldCQB          {};
			class battleFieldSupplies     {};
			class battleFieldMachineGuns  {};

			class battleFieldMedical      {};
			class battleFieldMedicLoop    {};
			class getWoundedAndHealers    {};
			class assignBattlefieldTurrets{};
			class leaveBattlefieldTurrets {};
		};
		
		class markers
		{
			file = "\soldierFSM\functions\markers";
			class posMarker				{};
			class drawCircle			{};
			class bfDebugMarkers		{};
			class drawCoverPositions	{};
		};

		class objectData
		{
			file = "\soldierFSM\functions\objectData";
			class glRifle				{};
			class ObjStance				{};
			class areaData				{};
			class getMapObjects			{};
			class excludedMapObject		{};
			class filterMapObjects		{};
			class terrainObjData		{};
			class squadAsset			{};
			class hasAmmoForWeapon      {};
			class isMachineGunner       {};
		};
		class hunkerDown
		{
			file = "\soldierFSM\functions\hunkerDown";
			class getHunkerObject		{};
			class initHunker			{};
			class isHunkerObject        {};
			class hunkAvailable			{};
			class getAvHunkObject		{};
			class filterHunkerObjects	{};
			class hunkObjHash	        {};
			class hunkerFSM				{};
			class hunkerFsmStatus		{};
			class addHunkerObjData		{};
			class setHobjPositions		{};
			class moveToHunkerPos		{};
			class endHunker				{};
			class initHunkerFSM			{};
			class handleHunkerStatus	{};
			class randomHunkerInit		{};

		};

		class turrets
		{
			file = "\soldierFSM\functions\turrets";
			class isTurret              {};
			class getTurretsAndLeaders  {};
			class assignTurret          {};
			class canGetInTurret        {};
			class turretAvailable       {};
			class turretRunEnded        {};
			class mountTurret           {};
			class getInTurret           {};
			class failTurretMount       {};
			class removeTurretVars      {};
			class onGetOutTurret        {};
			class canStayInTurret       {};
			class turretGetOut          {};
			class groupLeaveTurrets     {};
			class manAllTurrets         {};
		};
	};

	class Tcore
	{
		class core
		{
			file = "\soldierFSM\functions\core";
			class average				{};
			class decimals				{};
			class addZ					{};
			class roundPos				{};
			class avgPos				{};
			class get360Positions		{};
			class nearestPos			{};
			class getMidpoint           {};
			class sinCosPos				{};
			class findValidPos          {};
			
			class formatDir 			{};
			class avgRelDir				{};
			class inDirRange 			{};
			
			class object3DShape			{};
			class objPosData			{};
			class simpleObjectType		{};

			class clusterPos			{};
			class allClustersInRadius	{};
			class ClusterTerrainObjects	{};
			class positionsClusterArr	{};
			class clusterSize			{};
			class clusterMarker			{};
			class ClusterSides			{};
			
			class ClusterUnits			{};
			class ClusterVehicles		{};
			class clusterGroups         {};

			class unitCoverPosArr		{};
			class posCoverPosArr		{};
			class coverPosStance		{};
			class objCoverPosLight		{};
			class coverPosSimple		{};
			class visibleFromPositions	{};
			
			class debugMessage			{};
			class closestLocationName	{};
			class getLocationNamePos	{};
			
			class describeDir			{};
			class describeDistance		{};
			class stringToVarName		{};
			class areaName				{};			
			
			class toArrFromArr			{};
			
			class nearKnownEnemies      {};
			class knownDirToEnemy       {};
			class getLosTarget			{};
			class deadCrew				{};
			class grid100Pos            {};
			class substringsPresent     {};
			class playerLedGrp          {};
			class isPlayer				{};

			class toggleAiMoveInhibitors{};
			class deadMenInArea         {};
			class nearSoldiers          {};

			class nilNull				{};
			class posArrToPathPosArr    {};
			class avgHeight             {};
			class unitArrAimPositions   {};
			class posFromObjArr         {};

			class getPos                {};
			class straightPosArr        {};
			class squareGrid            {};
			class visibility            {};
			class sortByDist            {};
		};
	};

    #include "PR\cfgFunctions.hpp"
	#include "PR\medFunctions.hpp"
};