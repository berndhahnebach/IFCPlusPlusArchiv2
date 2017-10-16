/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedUnitEnum.h"

// TYPE IfcDerivedUnitEnum = ENUMERATION OF	(ANGULARVELOCITYUNIT	,AREADENSITYUNIT	,COMPOUNDPLANEANGLEUNIT	,DYNAMICVISCOSITYUNIT	,HEATFLUXDENSITYUNIT	,INTEGERCOUNTRATEUNIT	,ISOTHERMALMOISTURECAPACITYUNIT	,KINEMATICVISCOSITYUNIT	,LINEARVELOCITYUNIT	,MASSDENSITYUNIT	,MASSFLOWRATEUNIT	,MOISTUREDIFFUSIVITYUNIT	,MOLECULARWEIGHTUNIT	,SPECIFICHEATCAPACITYUNIT	,THERMALADMITTANCEUNIT	,THERMALCONDUCTANCEUNIT	,THERMALRESISTANCEUNIT	,THERMALTRANSMITTANCEUNIT	,VAPORPERMEABILITYUNIT	,VOLUMETRICFLOWRATEUNIT	,ROTATIONALFREQUENCYUNIT	,TORQUEUNIT	,MOMENTOFINERTIAUNIT	,LINEARMOMENTUNIT	,LINEARFORCEUNIT	,PLANARFORCEUNIT	,MODULUSOFELASTICITYUNIT	,SHEARMODULUSUNIT	,LINEARSTIFFNESSUNIT	,ROTATIONALSTIFFNESSUNIT	,MODULUSOFSUBGRADEREACTIONUNIT	,ACCELERATIONUNIT	,CURVATUREUNIT	,HEATINGVALUEUNIT	,IONCONCENTRATIONUNIT	,LUMINOUSINTENSITYDISTRIBUTIONUNIT	,MASSPERLENGTHUNIT	,MODULUSOFLINEARSUBGRADEREACTIONUNIT	,MODULUSOFROTATIONALSUBGRADEREACTIONUNIT	,PHUNIT	,ROTATIONALMASSUNIT	,SECTIONAREAINTEGRALUNIT	,SECTIONMODULUSUNIT	,SOUNDPOWERLEVELUNIT	,SOUNDPOWERUNIT	,SOUNDPRESSURELEVELUNIT	,SOUNDPRESSUREUNIT	,TEMPERATUREGRADIENTUNIT	,TEMPERATURERATEOFCHANGEUNIT	,THERMALEXPANSIONCOEFFICIENTUNIT	,WARPINGCONSTANTUNIT	,WARPINGMOMENTUNIT	,USERDEFINED);
IfcDerivedUnitEnum::IfcDerivedUnitEnum() {}
IfcDerivedUnitEnum::~IfcDerivedUnitEnum() {}
shared_ptr<IfcPPObject> IfcDerivedUnitEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcDerivedUnitEnum> copy_self( new IfcDerivedUnitEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDerivedUnitEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDERIVEDUNITENUM("; }
	switch( m_enum )
	{
		case ENUM_ANGULARVELOCITYUNIT:	stream << ".ANGULARVELOCITYUNIT."; break;
		case ENUM_AREADENSITYUNIT:	stream << ".AREADENSITYUNIT."; break;
		case ENUM_COMPOUNDPLANEANGLEUNIT:	stream << ".COMPOUNDPLANEANGLEUNIT."; break;
		case ENUM_DYNAMICVISCOSITYUNIT:	stream << ".DYNAMICVISCOSITYUNIT."; break;
		case ENUM_HEATFLUXDENSITYUNIT:	stream << ".HEATFLUXDENSITYUNIT."; break;
		case ENUM_INTEGERCOUNTRATEUNIT:	stream << ".INTEGERCOUNTRATEUNIT."; break;
		case ENUM_ISOTHERMALMOISTURECAPACITYUNIT:	stream << ".ISOTHERMALMOISTURECAPACITYUNIT."; break;
		case ENUM_KINEMATICVISCOSITYUNIT:	stream << ".KINEMATICVISCOSITYUNIT."; break;
		case ENUM_LINEARVELOCITYUNIT:	stream << ".LINEARVELOCITYUNIT."; break;
		case ENUM_MASSDENSITYUNIT:	stream << ".MASSDENSITYUNIT."; break;
		case ENUM_MASSFLOWRATEUNIT:	stream << ".MASSFLOWRATEUNIT."; break;
		case ENUM_MOISTUREDIFFUSIVITYUNIT:	stream << ".MOISTUREDIFFUSIVITYUNIT."; break;
		case ENUM_MOLECULARWEIGHTUNIT:	stream << ".MOLECULARWEIGHTUNIT."; break;
		case ENUM_SPECIFICHEATCAPACITYUNIT:	stream << ".SPECIFICHEATCAPACITYUNIT."; break;
		case ENUM_THERMALADMITTANCEUNIT:	stream << ".THERMALADMITTANCEUNIT."; break;
		case ENUM_THERMALCONDUCTANCEUNIT:	stream << ".THERMALCONDUCTANCEUNIT."; break;
		case ENUM_THERMALRESISTANCEUNIT:	stream << ".THERMALRESISTANCEUNIT."; break;
		case ENUM_THERMALTRANSMITTANCEUNIT:	stream << ".THERMALTRANSMITTANCEUNIT."; break;
		case ENUM_VAPORPERMEABILITYUNIT:	stream << ".VAPORPERMEABILITYUNIT."; break;
		case ENUM_VOLUMETRICFLOWRATEUNIT:	stream << ".VOLUMETRICFLOWRATEUNIT."; break;
		case ENUM_ROTATIONALFREQUENCYUNIT:	stream << ".ROTATIONALFREQUENCYUNIT."; break;
		case ENUM_TORQUEUNIT:	stream << ".TORQUEUNIT."; break;
		case ENUM_MOMENTOFINERTIAUNIT:	stream << ".MOMENTOFINERTIAUNIT."; break;
		case ENUM_LINEARMOMENTUNIT:	stream << ".LINEARMOMENTUNIT."; break;
		case ENUM_LINEARFORCEUNIT:	stream << ".LINEARFORCEUNIT."; break;
		case ENUM_PLANARFORCEUNIT:	stream << ".PLANARFORCEUNIT."; break;
		case ENUM_MODULUSOFELASTICITYUNIT:	stream << ".MODULUSOFELASTICITYUNIT."; break;
		case ENUM_SHEARMODULUSUNIT:	stream << ".SHEARMODULUSUNIT."; break;
		case ENUM_LINEARSTIFFNESSUNIT:	stream << ".LINEARSTIFFNESSUNIT."; break;
		case ENUM_ROTATIONALSTIFFNESSUNIT:	stream << ".ROTATIONALSTIFFNESSUNIT."; break;
		case ENUM_MODULUSOFSUBGRADEREACTIONUNIT:	stream << ".MODULUSOFSUBGRADEREACTIONUNIT."; break;
		case ENUM_ACCELERATIONUNIT:	stream << ".ACCELERATIONUNIT."; break;
		case ENUM_CURVATUREUNIT:	stream << ".CURVATUREUNIT."; break;
		case ENUM_HEATINGVALUEUNIT:	stream << ".HEATINGVALUEUNIT."; break;
		case ENUM_IONCONCENTRATIONUNIT:	stream << ".IONCONCENTRATIONUNIT."; break;
		case ENUM_LUMINOUSINTENSITYDISTRIBUTIONUNIT:	stream << ".LUMINOUSINTENSITYDISTRIBUTIONUNIT."; break;
		case ENUM_MASSPERLENGTHUNIT:	stream << ".MASSPERLENGTHUNIT."; break;
		case ENUM_MODULUSOFLINEARSUBGRADEREACTIONUNIT:	stream << ".MODULUSOFLINEARSUBGRADEREACTIONUNIT."; break;
		case ENUM_MODULUSOFROTATIONALSUBGRADEREACTIONUNIT:	stream << ".MODULUSOFROTATIONALSUBGRADEREACTIONUNIT."; break;
		case ENUM_PHUNIT:	stream << ".PHUNIT."; break;
		case ENUM_ROTATIONALMASSUNIT:	stream << ".ROTATIONALMASSUNIT."; break;
		case ENUM_SECTIONAREAINTEGRALUNIT:	stream << ".SECTIONAREAINTEGRALUNIT."; break;
		case ENUM_SECTIONMODULUSUNIT:	stream << ".SECTIONMODULUSUNIT."; break;
		case ENUM_SOUNDPOWERLEVELUNIT:	stream << ".SOUNDPOWERLEVELUNIT."; break;
		case ENUM_SOUNDPOWERUNIT:	stream << ".SOUNDPOWERUNIT."; break;
		case ENUM_SOUNDPRESSURELEVELUNIT:	stream << ".SOUNDPRESSURELEVELUNIT."; break;
		case ENUM_SOUNDPRESSUREUNIT:	stream << ".SOUNDPRESSUREUNIT."; break;
		case ENUM_TEMPERATUREGRADIENTUNIT:	stream << ".TEMPERATUREGRADIENTUNIT."; break;
		case ENUM_TEMPERATURERATEOFCHANGEUNIT:	stream << ".TEMPERATURERATEOFCHANGEUNIT."; break;
		case ENUM_THERMALEXPANSIONCOEFFICIENTUNIT:	stream << ".THERMALEXPANSIONCOEFFICIENTUNIT."; break;
		case ENUM_WARPINGCONSTANTUNIT:	stream << ".WARPINGCONSTANTUNIT."; break;
		case ENUM_WARPINGMOMENTUNIT:	stream << ".WARPINGMOMENTUNIT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDerivedUnitEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ANGULARVELOCITYUNIT:	return L"ANGULARVELOCITYUNIT";
		case ENUM_AREADENSITYUNIT:	return L"AREADENSITYUNIT";
		case ENUM_COMPOUNDPLANEANGLEUNIT:	return L"COMPOUNDPLANEANGLEUNIT";
		case ENUM_DYNAMICVISCOSITYUNIT:	return L"DYNAMICVISCOSITYUNIT";
		case ENUM_HEATFLUXDENSITYUNIT:	return L"HEATFLUXDENSITYUNIT";
		case ENUM_INTEGERCOUNTRATEUNIT:	return L"INTEGERCOUNTRATEUNIT";
		case ENUM_ISOTHERMALMOISTURECAPACITYUNIT:	return L"ISOTHERMALMOISTURECAPACITYUNIT";
		case ENUM_KINEMATICVISCOSITYUNIT:	return L"KINEMATICVISCOSITYUNIT";
		case ENUM_LINEARVELOCITYUNIT:	return L"LINEARVELOCITYUNIT";
		case ENUM_MASSDENSITYUNIT:	return L"MASSDENSITYUNIT";
		case ENUM_MASSFLOWRATEUNIT:	return L"MASSFLOWRATEUNIT";
		case ENUM_MOISTUREDIFFUSIVITYUNIT:	return L"MOISTUREDIFFUSIVITYUNIT";
		case ENUM_MOLECULARWEIGHTUNIT:	return L"MOLECULARWEIGHTUNIT";
		case ENUM_SPECIFICHEATCAPACITYUNIT:	return L"SPECIFICHEATCAPACITYUNIT";
		case ENUM_THERMALADMITTANCEUNIT:	return L"THERMALADMITTANCEUNIT";
		case ENUM_THERMALCONDUCTANCEUNIT:	return L"THERMALCONDUCTANCEUNIT";
		case ENUM_THERMALRESISTANCEUNIT:	return L"THERMALRESISTANCEUNIT";
		case ENUM_THERMALTRANSMITTANCEUNIT:	return L"THERMALTRANSMITTANCEUNIT";
		case ENUM_VAPORPERMEABILITYUNIT:	return L"VAPORPERMEABILITYUNIT";
		case ENUM_VOLUMETRICFLOWRATEUNIT:	return L"VOLUMETRICFLOWRATEUNIT";
		case ENUM_ROTATIONALFREQUENCYUNIT:	return L"ROTATIONALFREQUENCYUNIT";
		case ENUM_TORQUEUNIT:	return L"TORQUEUNIT";
		case ENUM_MOMENTOFINERTIAUNIT:	return L"MOMENTOFINERTIAUNIT";
		case ENUM_LINEARMOMENTUNIT:	return L"LINEARMOMENTUNIT";
		case ENUM_LINEARFORCEUNIT:	return L"LINEARFORCEUNIT";
		case ENUM_PLANARFORCEUNIT:	return L"PLANARFORCEUNIT";
		case ENUM_MODULUSOFELASTICITYUNIT:	return L"MODULUSOFELASTICITYUNIT";
		case ENUM_SHEARMODULUSUNIT:	return L"SHEARMODULUSUNIT";
		case ENUM_LINEARSTIFFNESSUNIT:	return L"LINEARSTIFFNESSUNIT";
		case ENUM_ROTATIONALSTIFFNESSUNIT:	return L"ROTATIONALSTIFFNESSUNIT";
		case ENUM_MODULUSOFSUBGRADEREACTIONUNIT:	return L"MODULUSOFSUBGRADEREACTIONUNIT";
		case ENUM_ACCELERATIONUNIT:	return L"ACCELERATIONUNIT";
		case ENUM_CURVATUREUNIT:	return L"CURVATUREUNIT";
		case ENUM_HEATINGVALUEUNIT:	return L"HEATINGVALUEUNIT";
		case ENUM_IONCONCENTRATIONUNIT:	return L"IONCONCENTRATIONUNIT";
		case ENUM_LUMINOUSINTENSITYDISTRIBUTIONUNIT:	return L"LUMINOUSINTENSITYDISTRIBUTIONUNIT";
		case ENUM_MASSPERLENGTHUNIT:	return L"MASSPERLENGTHUNIT";
		case ENUM_MODULUSOFLINEARSUBGRADEREACTIONUNIT:	return L"MODULUSOFLINEARSUBGRADEREACTIONUNIT";
		case ENUM_MODULUSOFROTATIONALSUBGRADEREACTIONUNIT:	return L"MODULUSOFROTATIONALSUBGRADEREACTIONUNIT";
		case ENUM_PHUNIT:	return L"PHUNIT";
		case ENUM_ROTATIONALMASSUNIT:	return L"ROTATIONALMASSUNIT";
		case ENUM_SECTIONAREAINTEGRALUNIT:	return L"SECTIONAREAINTEGRALUNIT";
		case ENUM_SECTIONMODULUSUNIT:	return L"SECTIONMODULUSUNIT";
		case ENUM_SOUNDPOWERLEVELUNIT:	return L"SOUNDPOWERLEVELUNIT";
		case ENUM_SOUNDPOWERUNIT:	return L"SOUNDPOWERUNIT";
		case ENUM_SOUNDPRESSURELEVELUNIT:	return L"SOUNDPRESSURELEVELUNIT";
		case ENUM_SOUNDPRESSUREUNIT:	return L"SOUNDPRESSUREUNIT";
		case ENUM_TEMPERATUREGRADIENTUNIT:	return L"TEMPERATUREGRADIENTUNIT";
		case ENUM_TEMPERATURERATEOFCHANGEUNIT:	return L"TEMPERATURERATEOFCHANGEUNIT";
		case ENUM_THERMALEXPANSIONCOEFFICIENTUNIT:	return L"THERMALEXPANSIONCOEFFICIENTUNIT";
		case ENUM_WARPINGCONSTANTUNIT:	return L"WARPINGCONSTANTUNIT";
		case ENUM_WARPINGMOMENTUNIT:	return L"WARPINGMOMENTUNIT";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
	}
	return L"";
}
shared_ptr<IfcDerivedUnitEnum> IfcDerivedUnitEnum::createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	// read TYPE
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDerivedUnitEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDerivedUnitEnum>(); }
	shared_ptr<IfcDerivedUnitEnum> type_object( new IfcDerivedUnitEnum() );
	if( boost::iequals( arg, L".ANGULARVELOCITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_ANGULARVELOCITYUNIT;
	}
	else if( boost::iequals( arg, L".AREADENSITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_AREADENSITYUNIT;
	}
	else if( boost::iequals( arg, L".COMPOUNDPLANEANGLEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_COMPOUNDPLANEANGLEUNIT;
	}
	else if( boost::iequals( arg, L".DYNAMICVISCOSITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_DYNAMICVISCOSITYUNIT;
	}
	else if( boost::iequals( arg, L".HEATFLUXDENSITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_HEATFLUXDENSITYUNIT;
	}
	else if( boost::iequals( arg, L".INTEGERCOUNTRATEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_INTEGERCOUNTRATEUNIT;
	}
	else if( boost::iequals( arg, L".ISOTHERMALMOISTURECAPACITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_ISOTHERMALMOISTURECAPACITYUNIT;
	}
	else if( boost::iequals( arg, L".KINEMATICVISCOSITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_KINEMATICVISCOSITYUNIT;
	}
	else if( boost::iequals( arg, L".LINEARVELOCITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_LINEARVELOCITYUNIT;
	}
	else if( boost::iequals( arg, L".MASSDENSITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_MASSDENSITYUNIT;
	}
	else if( boost::iequals( arg, L".MASSFLOWRATEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_MASSFLOWRATEUNIT;
	}
	else if( boost::iequals( arg, L".MOISTUREDIFFUSIVITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_MOISTUREDIFFUSIVITYUNIT;
	}
	else if( boost::iequals( arg, L".MOLECULARWEIGHTUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_MOLECULARWEIGHTUNIT;
	}
	else if( boost::iequals( arg, L".SPECIFICHEATCAPACITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_SPECIFICHEATCAPACITYUNIT;
	}
	else if( boost::iequals( arg, L".THERMALADMITTANCEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_THERMALADMITTANCEUNIT;
	}
	else if( boost::iequals( arg, L".THERMALCONDUCTANCEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_THERMALCONDUCTANCEUNIT;
	}
	else if( boost::iequals( arg, L".THERMALRESISTANCEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_THERMALRESISTANCEUNIT;
	}
	else if( boost::iequals( arg, L".THERMALTRANSMITTANCEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_THERMALTRANSMITTANCEUNIT;
	}
	else if( boost::iequals( arg, L".VAPORPERMEABILITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_VAPORPERMEABILITYUNIT;
	}
	else if( boost::iequals( arg, L".VOLUMETRICFLOWRATEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_VOLUMETRICFLOWRATEUNIT;
	}
	else if( boost::iequals( arg, L".ROTATIONALFREQUENCYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_ROTATIONALFREQUENCYUNIT;
	}
	else if( boost::iequals( arg, L".TORQUEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_TORQUEUNIT;
	}
	else if( boost::iequals( arg, L".MOMENTOFINERTIAUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_MOMENTOFINERTIAUNIT;
	}
	else if( boost::iequals( arg, L".LINEARMOMENTUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_LINEARMOMENTUNIT;
	}
	else if( boost::iequals( arg, L".LINEARFORCEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_LINEARFORCEUNIT;
	}
	else if( boost::iequals( arg, L".PLANARFORCEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_PLANARFORCEUNIT;
	}
	else if( boost::iequals( arg, L".MODULUSOFELASTICITYUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_MODULUSOFELASTICITYUNIT;
	}
	else if( boost::iequals( arg, L".SHEARMODULUSUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_SHEARMODULUSUNIT;
	}
	else if( boost::iequals( arg, L".LINEARSTIFFNESSUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_LINEARSTIFFNESSUNIT;
	}
	else if( boost::iequals( arg, L".ROTATIONALSTIFFNESSUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_ROTATIONALSTIFFNESSUNIT;
	}
	else if( boost::iequals( arg, L".MODULUSOFSUBGRADEREACTIONUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_MODULUSOFSUBGRADEREACTIONUNIT;
	}
	else if( boost::iequals( arg, L".ACCELERATIONUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_ACCELERATIONUNIT;
	}
	else if( boost::iequals( arg, L".CURVATUREUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_CURVATUREUNIT;
	}
	else if( boost::iequals( arg, L".HEATINGVALUEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_HEATINGVALUEUNIT;
	}
	else if( boost::iequals( arg, L".IONCONCENTRATIONUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_IONCONCENTRATIONUNIT;
	}
	else if( boost::iequals( arg, L".LUMINOUSINTENSITYDISTRIBUTIONUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_LUMINOUSINTENSITYDISTRIBUTIONUNIT;
	}
	else if( boost::iequals( arg, L".MASSPERLENGTHUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_MASSPERLENGTHUNIT;
	}
	else if( boost::iequals( arg, L".MODULUSOFLINEARSUBGRADEREACTIONUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_MODULUSOFLINEARSUBGRADEREACTIONUNIT;
	}
	else if( boost::iequals( arg, L".MODULUSOFROTATIONALSUBGRADEREACTIONUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_MODULUSOFROTATIONALSUBGRADEREACTIONUNIT;
	}
	else if( boost::iequals( arg, L".PHUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_PHUNIT;
	}
	else if( boost::iequals( arg, L".ROTATIONALMASSUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_ROTATIONALMASSUNIT;
	}
	else if( boost::iequals( arg, L".SECTIONAREAINTEGRALUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_SECTIONAREAINTEGRALUNIT;
	}
	else if( boost::iequals( arg, L".SECTIONMODULUSUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_SECTIONMODULUSUNIT;
	}
	else if( boost::iequals( arg, L".SOUNDPOWERLEVELUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_SOUNDPOWERLEVELUNIT;
	}
	else if( boost::iequals( arg, L".SOUNDPOWERUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_SOUNDPOWERUNIT;
	}
	else if( boost::iequals( arg, L".SOUNDPRESSURELEVELUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_SOUNDPRESSURELEVELUNIT;
	}
	else if( boost::iequals( arg, L".SOUNDPRESSUREUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_SOUNDPRESSUREUNIT;
	}
	else if( boost::iequals( arg, L".TEMPERATUREGRADIENTUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_TEMPERATUREGRADIENTUNIT;
	}
	else if( boost::iequals( arg, L".TEMPERATURERATEOFCHANGEUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_TEMPERATURERATEOFCHANGEUNIT;
	}
	else if( boost::iequals( arg, L".THERMALEXPANSIONCOEFFICIENTUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_THERMALEXPANSIONCOEFFICIENTUNIT;
	}
	else if( boost::iequals( arg, L".WARPINGCONSTANTUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_WARPINGCONSTANTUNIT;
	}
	else if( boost::iequals( arg, L".WARPINGMOMENTUNIT." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_WARPINGMOMENTUNIT;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDerivedUnitEnum::ENUM_USERDEFINED;
	}
	return type_object;
}
