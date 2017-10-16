/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcSurfaceSide = ENUMERATION OF	(POSITIVE	,NEGATIVE	,BOTH);
class IFCPP_EXPORT IfcSurfaceSide : virtual public IfcPPObject
{
public:
	enum IfcSurfaceSideEnum
	{
		ENUM_POSITIVE,
		ENUM_NEGATIVE,
		ENUM_BOTH
	};

	IfcSurfaceSide();
	IfcSurfaceSide( IfcSurfaceSideEnum e ) { m_enum = e; }
	~IfcSurfaceSide();
	virtual const char* className() const { return "IfcSurfaceSide"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSurfaceSide> createObjectFromSTEP( const std::wstring& arg, const map_t<int,shared_ptr<IfcPPEntity> >& map );
	IfcSurfaceSideEnum m_enum;
};

